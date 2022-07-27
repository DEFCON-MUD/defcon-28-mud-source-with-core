inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 12, 6 }));
  set_short( "Hallway - x38y12z6" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y12z6.c",
  "east" : DIR+"/rooms/x39y12z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
