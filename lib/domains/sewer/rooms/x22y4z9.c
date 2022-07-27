inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 4, 9 }));
  set_short( "Hallway - x22y4z9" );
set_objects( DIR+"/monsters/clubbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y4z9.c",
  "east" : DIR+"/rooms/x23y4z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
