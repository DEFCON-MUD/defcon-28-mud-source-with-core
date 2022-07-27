inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 64, 2 }));
  set_short( "Corridor - x2y64z2" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x3y64z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east.%^RESET%^");
}
