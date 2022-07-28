inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 2, 8 }));
  set_short( "Passage - x54y2z8" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y2z8.c",
  "east" : DIR+"/rooms/x55y2z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
