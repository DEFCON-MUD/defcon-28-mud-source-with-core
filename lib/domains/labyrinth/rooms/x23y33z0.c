inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 33, 0 }));
  set_short( "Passage - x23y33z0" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y34z0.c",
  "south" : DIR+"/rooms/x23y32z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
