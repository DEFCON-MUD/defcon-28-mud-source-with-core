inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 64, 3 }));
  set_short( "Passage - x51y64z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y64z3.c",
  "east" : DIR+"/rooms/x52y64z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
