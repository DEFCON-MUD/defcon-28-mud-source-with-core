inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 18, 3 }));
  set_short( "Passage - x30y18z3" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y18z3.c",
  "east" : DIR+"/rooms/x31y18z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
