inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 4 }));
  set_short( "Corridor - x13y36z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y36z4.c",
  "south" : DIR+"/rooms/x13y35z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
