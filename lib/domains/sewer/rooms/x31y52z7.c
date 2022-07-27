inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 7 }));
  set_short( "Corridor - x31y52z7" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y52z7.c",
  "south" : DIR+"/rooms/x31y51z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
