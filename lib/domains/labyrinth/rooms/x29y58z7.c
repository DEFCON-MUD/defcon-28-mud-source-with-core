inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 7 }));
  set_short( "Corridor - x29y58z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y58z7.c",
  "east" : DIR+"/rooms/x30y58z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
