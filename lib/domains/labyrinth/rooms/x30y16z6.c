inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 16, 6 }));
  set_short( "Passage - x30y16z6" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y16z6.c",
  "east" : DIR+"/rooms/x31y16z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
