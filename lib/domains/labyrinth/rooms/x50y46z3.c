inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 46, 3 }));
  set_short( "Corridor - x50y46z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y46z3.c",
  "east" : DIR+"/rooms/x51y46z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
