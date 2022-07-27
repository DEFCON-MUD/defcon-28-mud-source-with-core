inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 0 }));
  set_short( "Corridor - x8y18z0" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z0.c",
  "east" : DIR+"/rooms/x9y18z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
