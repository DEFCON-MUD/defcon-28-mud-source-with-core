inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 28, 7 }));
  set_short( "Corridor - x32y28z7" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y28z7.c",
  "east" : DIR+"/rooms/x33y28z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
