inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 47, 2 }));
  set_short( "Corridor - x13y47z2" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y48z2.c",
  "south" : DIR+"/rooms/x13y46z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
