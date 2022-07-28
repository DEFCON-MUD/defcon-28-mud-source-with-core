inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 18, 9 }));
  set_short( "Passage - x8y18z9" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y18z9.c",
  "east" : DIR+"/rooms/x9y18z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
