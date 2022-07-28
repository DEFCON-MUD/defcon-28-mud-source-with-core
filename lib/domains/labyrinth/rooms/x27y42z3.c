inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 3 }));
  set_short( "Passage - x27y42z3" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y42z3.c",
  "east" : DIR+"/rooms/x28y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
