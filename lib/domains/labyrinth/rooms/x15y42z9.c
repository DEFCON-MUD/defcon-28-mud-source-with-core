inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 42, 9 }));
  set_short( "Passage - x15y42z9" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y42z9.c",
  "east" : DIR+"/rooms/x16y42z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
