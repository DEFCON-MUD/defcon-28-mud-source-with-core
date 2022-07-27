inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 2 }));
  set_short( "Corridor - x57y20z2" );
set_objects( DIR+"/monsters/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y20z2.c",
  "east" : DIR+"/rooms/x58y20z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
