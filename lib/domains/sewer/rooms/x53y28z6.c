inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 28, 6 }));
  set_short( "Hallway - x53y28z6" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y28z6.c",
  "east" : DIR+"/rooms/x54y28z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
