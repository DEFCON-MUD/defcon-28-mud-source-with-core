inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 20, 6 }));
  set_short( "Hallway - x10y20z6" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y20z6.c",
  "east" : DIR+"/rooms/x11y20z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
