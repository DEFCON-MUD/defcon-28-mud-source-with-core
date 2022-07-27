inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 46, 3 }));
  set_short( "Passage - x56y46z3" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y46z3.c",
  "east" : DIR+"/rooms/x57y46z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
