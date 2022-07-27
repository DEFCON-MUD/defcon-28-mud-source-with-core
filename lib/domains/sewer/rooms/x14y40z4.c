inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 40, 4 }));
  set_short( "Passage - x14y40z4" );
set_objects( DIR+"/monsters/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y40z4.c",
  "east" : DIR+"/rooms/x15y40z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
