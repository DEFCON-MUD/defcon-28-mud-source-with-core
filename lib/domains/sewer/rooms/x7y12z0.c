inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 12, 0 }));
  set_short( "Corridor - x7y12z0" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y13z0.c",
  "south" : DIR+"/rooms/x7y11z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
