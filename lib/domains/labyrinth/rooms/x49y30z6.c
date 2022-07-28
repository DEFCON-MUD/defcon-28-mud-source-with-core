inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 6 }));
  set_short( "Hallway - x49y30z6" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y30z6.c",
  "south" : DIR+"/rooms/x49y29z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
