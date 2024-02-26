inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 49, 5 }));
  set_short( "Passage - x23y49z5" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y50z5.c",
  "south" : DIR+"/rooms/x23y48z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
