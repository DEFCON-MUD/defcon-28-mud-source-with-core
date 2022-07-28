inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 42, 0 }));
  set_short( "Passage - x52y42z0" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y42z0.c",
  "east" : DIR+"/rooms/x53y42z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
