inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 52, 4 }));
  set_short( "Passage - x24y52z4" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y52z4.c",
  "east" : DIR+"/rooms/x25y52z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
