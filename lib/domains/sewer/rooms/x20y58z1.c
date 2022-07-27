inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 58, 1 }));
  set_short( "Passage - x20y58z1" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y58z1.c",
  "east" : DIR+"/rooms/x21y58z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
