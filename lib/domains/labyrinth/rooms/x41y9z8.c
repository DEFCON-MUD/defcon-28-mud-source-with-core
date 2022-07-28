inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 9, 8 }));
  set_short( "Passage - x41y9z8" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y10z8.c",
  "south" : DIR+"/rooms/x41y8z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
