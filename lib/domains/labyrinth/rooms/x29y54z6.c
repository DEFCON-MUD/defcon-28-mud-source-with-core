inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 6 }));
  set_short( "Corridor - x29y54z6" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y55z6.c",
  "south" : DIR+"/rooms/x29y53z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
