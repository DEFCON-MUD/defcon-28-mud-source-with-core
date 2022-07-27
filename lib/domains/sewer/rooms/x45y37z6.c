inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 37, 6 }));
  set_short( "Corridor - x45y37z6" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y38z6.c",
  "south" : DIR+"/rooms/x45y36z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
