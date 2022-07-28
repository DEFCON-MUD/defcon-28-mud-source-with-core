inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 37, 6 }));
  set_short( "Passage - x35y37z6" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y38z6.c",
  "south" : DIR+"/rooms/x35y36z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
