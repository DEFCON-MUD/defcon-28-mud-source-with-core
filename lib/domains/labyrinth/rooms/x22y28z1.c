inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 28, 1 }));
  set_short( "Passage - x22y28z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y28z1.c",
  "east" : DIR+"/rooms/x23y28z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
