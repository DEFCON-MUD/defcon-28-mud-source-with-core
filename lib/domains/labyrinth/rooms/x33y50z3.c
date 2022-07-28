inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 3 }));
  set_short( "Passage - x33y50z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z3.c",
  "south" : DIR+"/rooms/x33y49z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
