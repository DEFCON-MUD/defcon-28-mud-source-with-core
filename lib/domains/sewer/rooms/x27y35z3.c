inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 3 }));
  set_short( "Hallway - x27y35z3" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z3.c",
  "south" : DIR+"/rooms/x27y34z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
