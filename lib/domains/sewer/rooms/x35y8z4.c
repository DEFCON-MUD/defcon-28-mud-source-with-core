inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 4 }));
  set_short( "Hallway - x35y8z4" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y9z4.c",
  "south" : DIR+"/rooms/x35y7z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
