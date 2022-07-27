inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 43, 6 }));
  set_short( "Corridor - x1y43z6" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y44z6.c",
  "south" : DIR+"/rooms/x1y42z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
