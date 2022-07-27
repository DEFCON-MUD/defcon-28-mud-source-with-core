inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 34, 0 }));
  set_short( "Corridor - x44y34z0" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y34z0.c",
  "east" : DIR+"/rooms/x45y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
