inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 0 }));
  set_short( "Hallway - x23y22z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z0.c",
  "east" : DIR+"/rooms/x24y22z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
