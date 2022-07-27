inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 8 }));
  set_short( "Passage - x37y20z8" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z8.c",
  "south" : DIR+"/rooms/x37y19z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
