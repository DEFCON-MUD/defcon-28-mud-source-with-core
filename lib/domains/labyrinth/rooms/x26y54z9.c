inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 54, 9 }));
  set_short( "Corridor - x26y54z9" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y54z9.c",
  "east" : DIR+"/rooms/x27y54z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
