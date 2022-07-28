inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 50, 6 }));
  set_short( "Passage - x59y50z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y50z6.c",
  "south" : DIR+"/rooms/x59y49z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
