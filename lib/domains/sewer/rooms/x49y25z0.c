inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 25, 0 }));
  set_short( "Corridor - x49y25z0" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y26z0.c",
  "south" : DIR+"/rooms/x49y24z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
