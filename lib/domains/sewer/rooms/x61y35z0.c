inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 35, 0 }));
  set_short( "Hallway - x61y35z0" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y36z0.c",
  "south" : DIR+"/rooms/x61y34z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
