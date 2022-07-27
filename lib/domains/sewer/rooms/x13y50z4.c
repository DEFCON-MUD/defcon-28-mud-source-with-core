inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 4 }));
  set_short( "Corridor - x13y50z4" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y50z4.c",
  "south" : DIR+"/rooms/x13y49z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
