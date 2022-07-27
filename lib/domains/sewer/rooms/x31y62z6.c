inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 62, 6 }));
  set_short( "Corridor - x31y62z6" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y62z6.c",
  "south" : DIR+"/rooms/x31y61z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
