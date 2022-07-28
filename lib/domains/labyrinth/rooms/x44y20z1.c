inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 1 }));
  set_short( "Hallway - x44y20z1" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z1.c",
  "east" : DIR+"/rooms/x45y20z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
