inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 27, 3 }));
  set_short( "Passage - x45y27z3" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y28z3.c",
  "south" : DIR+"/rooms/x45y26z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
