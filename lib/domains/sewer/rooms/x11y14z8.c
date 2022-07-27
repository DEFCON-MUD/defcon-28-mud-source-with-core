inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 8 }));
  set_short( "Hallway - x11y14z8" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y14z8.c",
  "east" : DIR+"/rooms/x12y14z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
