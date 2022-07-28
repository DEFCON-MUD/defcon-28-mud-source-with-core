inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 3 }));
  set_short( "Passage - x27y40z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y40z3.c",
  "east" : DIR+"/rooms/x28y40z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
