inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 8, 4 }));
  set_short( "Corridor - x1y8z4" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y9z4.c",
  "south" : DIR+"/rooms/x1y7z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
