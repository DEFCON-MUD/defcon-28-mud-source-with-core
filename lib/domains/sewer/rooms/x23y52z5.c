inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 5 }));
  set_short( "Corridor - x23y52z5" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z5.c",
  "south" : DIR+"/rooms/x23y51z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
