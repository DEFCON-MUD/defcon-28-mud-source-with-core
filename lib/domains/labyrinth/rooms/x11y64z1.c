inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 1 }));
  set_short( "Hallway - x11y64z1" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z1.c",
  "east" : DIR+"/rooms/x12y64z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
