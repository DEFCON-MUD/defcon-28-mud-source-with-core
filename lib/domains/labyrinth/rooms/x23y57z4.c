inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 57, 4 }));
  set_short( "Passage - x23y57z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y58z4.c",
  "south" : DIR+"/rooms/x23y56z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
