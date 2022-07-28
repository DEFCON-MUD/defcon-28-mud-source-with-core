inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 10, 0 }));
  set_short( "Hallway - x25y10z0" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y11z0.c",
  "south" : DIR+"/rooms/x25y9z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
