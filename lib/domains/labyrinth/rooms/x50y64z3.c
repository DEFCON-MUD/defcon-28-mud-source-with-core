inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 64, 3 }));
  set_short( "Hallway - x50y64z3" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y64z3.c",
  "east" : DIR+"/rooms/x51y64z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
