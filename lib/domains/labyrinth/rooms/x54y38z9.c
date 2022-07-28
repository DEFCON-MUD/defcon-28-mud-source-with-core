inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 38, 9 }));
  set_short( "Passage - x54y38z9" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y38z9.c",
  "east" : DIR+"/rooms/x55y38z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
