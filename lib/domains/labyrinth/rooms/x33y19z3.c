inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 19, 3 }));
  set_short( "Hallway - x33y19z3" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y20z3.c",
  "south" : DIR+"/rooms/x33y18z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
