inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 28, 4 }));
  set_short( "Passage - x21y28z4" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y28z4.c",
  "north" : DIR+"/rooms/x21y29z4.c",
  "south" : DIR+"/rooms/x21y27z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
