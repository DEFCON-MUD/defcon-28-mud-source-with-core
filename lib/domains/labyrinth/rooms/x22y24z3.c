inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 24, 3 }));
  set_short( "Hallway - x22y24z3" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y24z3.c",
  "east" : DIR+"/rooms/x23y24z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
