inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 1 }));
  set_short( "Corridor - x1y0z1" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
