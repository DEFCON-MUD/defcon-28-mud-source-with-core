inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 28, 6 }));
  set_short( "Hallway - x61y28z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y28z6.c",
  "south" : DIR+"/rooms/x61y27z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
