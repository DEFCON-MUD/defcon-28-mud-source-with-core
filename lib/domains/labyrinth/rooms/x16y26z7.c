inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 26, 7 }));
  set_short( "Passage - x16y26z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y26z7.c",
  "east" : DIR+"/rooms/x17y26z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
