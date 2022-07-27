inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 3 }));
  set_short( "Corridor - x3y22z3" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y22z3.c",
  "north" : DIR+"/rooms/x3y23z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
