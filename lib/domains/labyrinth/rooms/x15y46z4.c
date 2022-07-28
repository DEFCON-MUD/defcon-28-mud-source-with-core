inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 46, 4 }));
  set_short( "Hallway - x15y46z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y46z4.c",
  "south" : DIR+"/rooms/x15y45z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
