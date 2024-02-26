inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 36, 3 }));
  set_short( "Corridor - x60y36z3" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y36z3.c",
  "east" : DIR+"/rooms/x61y36z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
