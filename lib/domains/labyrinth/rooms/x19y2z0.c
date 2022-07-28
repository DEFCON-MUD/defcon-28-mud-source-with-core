inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 0 }));
  set_short( "Hallway - x19y2z0" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z0.c",
  "east" : DIR+"/rooms/x20y2z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
