inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 0, 0 }));
  set_short( "Passage - x24y0z0" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y0z0.c",
  "east" : DIR+"/rooms/x25y0z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
