inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 0 }));
  set_short( "Corridor - x19y11z0" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z0.c",
  "south" : DIR+"/rooms/x19y10z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
