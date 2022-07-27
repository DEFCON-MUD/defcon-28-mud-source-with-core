inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 60, 2 }));
  set_short( "Corridor - x20y60z2" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y60z2.c",
  "east" : DIR+"/rooms/x21y60z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
