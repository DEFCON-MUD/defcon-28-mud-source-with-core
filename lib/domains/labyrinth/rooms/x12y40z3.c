inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 3 }));
  set_short( "Passage - x12y40z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z3.c",
  "east" : DIR+"/rooms/x13y40z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
