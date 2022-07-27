inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 46, 7 }));
  set_short( "Corridor - x22y46z7" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y46z7.c",
  "east" : DIR+"/rooms/x23y46z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
