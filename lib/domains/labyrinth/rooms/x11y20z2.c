inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 20, 2 }));
  set_short( "Passage - x11y20z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y20z2.c",
  "south" : DIR+"/rooms/x11y19z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
