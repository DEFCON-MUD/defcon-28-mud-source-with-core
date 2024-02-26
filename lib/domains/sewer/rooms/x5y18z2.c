inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 2 }));
  set_short( "Hallway - x5y18z2" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y18z2.c",
  "south" : DIR+"/rooms/x5y17z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
