inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 46, 5 }));
  set_short( "Corridor - x55y46z5" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y47z5.c",
  "south" : DIR+"/rooms/x55y45z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
