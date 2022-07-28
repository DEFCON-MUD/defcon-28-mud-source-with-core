inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 40, 3 }));
  set_short( "Corridor - x30y40z3" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y40z3.c",
  "east" : DIR+"/rooms/x31y40z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
