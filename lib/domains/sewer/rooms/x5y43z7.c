inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 7 }));
  set_short( "Corridor - x5y43z7" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z7.c",
  "south" : DIR+"/rooms/x5y42z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
