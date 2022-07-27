inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 59, 6 }));
  set_short( "Corridor - x23y59z6" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y60z6.c",
  "south" : DIR+"/rooms/x23y58z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
