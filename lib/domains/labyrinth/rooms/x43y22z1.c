inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 22, 1 }));
  set_short( "Hallway - x43y22z1" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y22z1.c",
  "south" : DIR+"/rooms/x43y21z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
