inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 3 }));
  set_short( "Corridor - x1y10z3" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y11z3.c",
  "south" : DIR+"/rooms/x1y9z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
