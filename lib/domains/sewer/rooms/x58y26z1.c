inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 26, 1 }));
  set_short( "Hallway - x58y26z1" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y26z1.c",
  "east" : DIR+"/rooms/x59y26z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
