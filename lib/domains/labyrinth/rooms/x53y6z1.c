inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 1 }));
  set_short( "Corridor - x53y6z1" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z1.c",
  "north" : DIR+"/rooms/x53y7z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
