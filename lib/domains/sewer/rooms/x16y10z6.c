inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 10, 6 }));
  set_short( "Hallway - x16y10z6" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y10z6.c",
  "east" : DIR+"/rooms/x17y10z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
