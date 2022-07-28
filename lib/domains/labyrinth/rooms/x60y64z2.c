inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 2 }));
  set_short( "Passage - x60y64z2" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z2.c",
  "east" : DIR+"/rooms/x61y64z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
