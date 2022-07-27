inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 9, 7 }));
  set_short( "Corridor - x13y9z7" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y10z7.c",
  "south" : DIR+"/rooms/x13y8z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
