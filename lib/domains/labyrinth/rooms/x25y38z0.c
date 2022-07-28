inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 38, 0 }));
  set_short( "Corridor - x25y38z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y39z0.c",
  "south" : DIR+"/rooms/x25y37z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
