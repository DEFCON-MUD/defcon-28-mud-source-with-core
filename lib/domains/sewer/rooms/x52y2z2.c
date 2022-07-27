inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 2, 2 }));
  set_short( "Hallway - x52y2z2" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y2z2.c",
  "east" : DIR+"/rooms/x53y2z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
