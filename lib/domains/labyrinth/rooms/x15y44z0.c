inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 0 }));
  set_short( "Corridor - x15y44z0" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z0.c",
  "south" : DIR+"/rooms/x15y43z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
