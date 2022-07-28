inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 20, 1 }));
  set_short( "Hallway - x34y20z1" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y20z1.c",
  "east" : DIR+"/rooms/x35y20z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
