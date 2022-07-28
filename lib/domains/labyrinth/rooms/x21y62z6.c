inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 6 }));
  set_short( "Hallway - x21y62z6" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z6.c",
  "east" : DIR+"/rooms/x22y62z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
