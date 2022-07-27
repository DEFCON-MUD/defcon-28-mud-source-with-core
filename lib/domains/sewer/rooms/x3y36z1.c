inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 1 }));
  set_short( "Corridor - x3y36z1" );
set_objects( DIR+"/monsters/rarmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z1.c",
  "south" : DIR+"/rooms/x3y35z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
