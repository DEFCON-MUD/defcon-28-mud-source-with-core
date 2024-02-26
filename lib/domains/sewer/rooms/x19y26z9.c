inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 26, 9 }));
  set_short( "Hallway - x19y26z9" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y27z9.c",
  "south" : DIR+"/rooms/x19y25z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
