inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 7 }));
  set_short( "Passage - x9y64z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z7.c",
  "east" : DIR+"/rooms/x10y64z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
