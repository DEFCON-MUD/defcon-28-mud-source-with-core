inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 5 }));
  set_short( "Hallway - x7y19z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z5.c",
  "south" : DIR+"/rooms/x7y18z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
