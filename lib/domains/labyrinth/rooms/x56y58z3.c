inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 58, 3 }));
  set_short( "Hallway - x56y58z3" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y58z3.c",
  "east" : DIR+"/rooms/x57y58z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
