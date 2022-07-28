inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 46, 0 }));
  set_short( "Passage - x52y46z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y46z0.c",
  "east" : DIR+"/rooms/x53y46z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
