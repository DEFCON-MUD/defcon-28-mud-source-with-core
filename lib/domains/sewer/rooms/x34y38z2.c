inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 38, 2 }));
  set_short( "Passage - x34y38z2" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y38z2.c",
  "east" : DIR+"/rooms/x35y38z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
