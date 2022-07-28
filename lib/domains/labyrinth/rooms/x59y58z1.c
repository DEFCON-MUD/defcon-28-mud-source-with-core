inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 1 }));
  set_short( "Corridor - x59y58z1" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y59z1.c",
  "south" : DIR+"/rooms/x59y57z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
