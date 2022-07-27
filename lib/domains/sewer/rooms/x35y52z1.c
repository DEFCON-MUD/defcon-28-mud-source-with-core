inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 52, 1 }));
  set_short( "Passage - x35y52z1" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y52z1.c",
  "north" : DIR+"/rooms/x35y53z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
