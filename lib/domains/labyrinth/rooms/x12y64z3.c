inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 3 }));
  set_short( "Passage - x12y64z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z3.c",
  "east" : DIR+"/rooms/x13y64z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
