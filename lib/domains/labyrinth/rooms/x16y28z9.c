inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 28, 9 }));
  set_short( "Hallway - x16y28z9" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y28z9.c",
  "east" : DIR+"/rooms/x17y28z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
