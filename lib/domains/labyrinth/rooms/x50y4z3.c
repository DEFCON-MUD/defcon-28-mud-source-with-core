inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 4, 3 }));
  set_short( "Passage - x50y4z3" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y4z3.c",
  "east" : DIR+"/rooms/x51y4z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
