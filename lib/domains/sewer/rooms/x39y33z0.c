inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 33, 0 }));
  set_short( "Corridor - x39y33z0" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y34z0.c",
  "south" : DIR+"/rooms/x39y32z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
