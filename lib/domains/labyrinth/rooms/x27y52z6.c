inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 6 }));
  set_short( "Passage - x27y52z6" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z6.c",
  "east" : DIR+"/rooms/x28y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
