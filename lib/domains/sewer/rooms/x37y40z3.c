inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 40, 3 }));
  set_short( "Passage - x37y40z3" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y40z3.c",
  "east" : DIR+"/rooms/x38y40z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
