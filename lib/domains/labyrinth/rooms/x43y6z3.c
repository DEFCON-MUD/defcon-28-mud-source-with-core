inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 3 }));
  set_short( "Passage - x43y6z3" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y7z3.c",
  "south" : DIR+"/rooms/x43y5z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
