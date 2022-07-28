inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 0 }));
  set_short( "Corridor - x7y36z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y37z0.c",
  "south" : DIR+"/rooms/x7y35z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
