inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 11, 2 }));
  set_short( "Passage - x5y11z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y12z2.c",
  "south" : DIR+"/rooms/x5y10z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
