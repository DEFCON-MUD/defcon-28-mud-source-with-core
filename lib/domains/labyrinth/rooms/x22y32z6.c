inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 32, 6 }));
  set_short( "Hallway - x22y32z6" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y32z6.c",
  "east" : DIR+"/rooms/x23y32z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
