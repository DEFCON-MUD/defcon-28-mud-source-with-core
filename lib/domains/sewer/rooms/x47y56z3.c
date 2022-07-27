inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 3 }));
  set_short( "Corridor - x47y56z3" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y57z3.c",
  "south" : DIR+"/rooms/x47y55z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
