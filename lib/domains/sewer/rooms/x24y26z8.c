inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 26, 8 }));
  set_short( "Hallway - x24y26z8" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y26z8.c",
  "east" : DIR+"/rooms/x25y26z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
