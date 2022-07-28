inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 20, 2 }));
  set_short( "Passage - x24y20z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y20z2.c",
  "east" : DIR+"/rooms/x25y20z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
