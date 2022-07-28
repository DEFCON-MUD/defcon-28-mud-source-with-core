inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 28, 8 }));
  set_short( "Corridor - x4y28z8" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y28z8.c",
  "east" : DIR+"/rooms/x5y28z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
