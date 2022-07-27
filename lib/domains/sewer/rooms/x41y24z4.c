inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 4 }));
  set_short( "Passage - x41y24z4" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y24z4.c",
  "north" : DIR+"/rooms/x41y25z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
