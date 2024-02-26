inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 14, 3 }));
  set_short( "Hallway - x31y14z3" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y15z3.c",
  "south" : DIR+"/rooms/x31y13z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
