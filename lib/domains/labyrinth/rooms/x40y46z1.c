inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 46, 1 }));
  set_short( "Passage - x40y46z1" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y46z1.c",
  "east" : DIR+"/rooms/x41y46z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
