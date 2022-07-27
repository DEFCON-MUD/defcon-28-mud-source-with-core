inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 29, 8 }));
  set_short( "Passage - x11y29z8" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y30z8.c",
  "south" : DIR+"/rooms/x11y28z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
