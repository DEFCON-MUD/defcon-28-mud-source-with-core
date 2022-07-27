inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 56, 6 }));
  set_short( "Hallway - x23y56z6" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y56z6.c",
  "south" : DIR+"/rooms/x23y55z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
