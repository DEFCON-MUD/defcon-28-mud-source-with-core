inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 44, 6 }));
  set_short( "Hallway - x13y44z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y44z6.c",
  "south" : DIR+"/rooms/x13y43z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
