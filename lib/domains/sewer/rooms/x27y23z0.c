inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 23, 0 }));
  set_short( "Corridor - x27y23z0" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y24z0.c",
  "south" : DIR+"/rooms/x27y22z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
