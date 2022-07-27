inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 20, 9 }));
  set_short( "Hallway - x20y20z9" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y20z9.c",
  "east" : DIR+"/rooms/x21y20z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
