inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 18, 7 }));
  set_short( "Corridor - x35y18z7" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y18z7.c",
  "north" : DIR+"/rooms/x35y19z7.c",
  "south" : DIR+"/rooms/x35y17z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
