inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 44, 8 }));
  set_short( "Hallway - x1y44z8" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y44z8.c",
  "south" : DIR+"/rooms/x1y43z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
