inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 14, 6 }));
  set_short( "Corridor - x58y14z6" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y14z6.c",
  "east" : DIR+"/rooms/x59y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
