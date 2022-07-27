inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 21, 0 }));
  set_short( "Corridor - x5y21z0" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y22z0.c",
  "south" : DIR+"/rooms/x5y20z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
