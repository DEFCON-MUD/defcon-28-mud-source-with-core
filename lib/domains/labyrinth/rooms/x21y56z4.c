inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 4 }));
  set_short( "Hallway - x21y56z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y56z4.c",
  "south" : DIR+"/rooms/x21y55z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
