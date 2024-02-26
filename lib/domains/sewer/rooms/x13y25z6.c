inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 25, 6 }));
  set_short( "Passage - x13y25z6" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y26z6.c",
  "south" : DIR+"/rooms/x13y24z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
