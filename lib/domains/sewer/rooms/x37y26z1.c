inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 1 }));
  set_short( "Corridor - x37y26z1" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y27z1.c",
  "south" : DIR+"/rooms/x37y25z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
