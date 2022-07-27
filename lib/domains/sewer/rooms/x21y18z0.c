inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 18, 0 }));
  set_short( "Passage - x21y18z0" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y18z0.c",
  "south" : DIR+"/rooms/x21y17z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
