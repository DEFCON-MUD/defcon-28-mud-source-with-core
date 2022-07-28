inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 0 }));
  set_short( "Corridor - x50y64z0" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z0.c",
  "east" : DIR+"/rooms/x51y64z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
