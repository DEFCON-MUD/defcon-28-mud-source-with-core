inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 27, 2 }));
  set_short( "Corridor - x61y27z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y28z2.c",
  "south" : DIR+"/rooms/x61y26z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
