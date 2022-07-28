inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 2 }));
  set_short( "Corridor - x5y54z2" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y54z2.c",
  "north" : DIR+"/rooms/x5y55z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
