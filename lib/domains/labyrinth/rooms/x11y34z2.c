inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 2 }));
  set_short( "Passage - x11y34z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y34z2.c",
  "south" : DIR+"/rooms/x11y33z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
