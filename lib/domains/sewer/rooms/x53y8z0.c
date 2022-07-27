inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 0 }));
  set_short( "Passage - x53y8z0" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y8z0.c",
  "north" : DIR+"/rooms/x53y9z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
