inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 3 }));
  set_short( "Corridor - x25y54z3" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y54z3.c",
  "east" : DIR+"/rooms/x26y54z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
