inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 48, 3 }));
  set_short( "Passage - x37y48z3" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y48z3.c",
  "south" : DIR+"/rooms/x37y47z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
