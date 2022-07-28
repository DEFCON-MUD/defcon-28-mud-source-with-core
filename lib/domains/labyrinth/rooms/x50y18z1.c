inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 18, 1 }));
  set_short( "Corridor - x50y18z1" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y18z1.c",
  "east" : DIR+"/rooms/x51y18z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
