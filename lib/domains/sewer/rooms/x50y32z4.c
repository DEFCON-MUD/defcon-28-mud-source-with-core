inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 32, 4 }));
  set_short( "Passage - x50y32z4" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y32z4.c",
  "east" : DIR+"/rooms/x51y32z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
