inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 46, 9 }));
  set_short( "Corridor - x40y46z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y46z9.c",
  "east" : DIR+"/rooms/x41y46z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
