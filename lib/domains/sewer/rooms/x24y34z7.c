inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 34, 7 }));
  set_short( "Corridor - x24y34z7" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y34z7.c",
  "east" : DIR+"/rooms/x25y34z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
