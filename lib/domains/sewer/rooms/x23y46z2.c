inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 2 }));
  set_short( "Passage - x23y46z2" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y46z2.c",
  "north" : DIR+"/rooms/x23y47z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
