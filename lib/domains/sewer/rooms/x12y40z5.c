inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 40, 5 }));
  set_short( "Hallway - x12y40z5" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y40z5.c",
  "east" : DIR+"/rooms/x13y40z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
