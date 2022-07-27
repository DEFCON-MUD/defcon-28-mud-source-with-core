inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 8, 3 }));
  set_short( "Corridor - x27y8z3" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y9z3.c",
  "south" : DIR+"/rooms/x27y7z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
