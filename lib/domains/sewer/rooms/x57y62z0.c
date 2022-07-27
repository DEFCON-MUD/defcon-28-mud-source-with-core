inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 0 }));
  set_short( "Passage - x57y62z0" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y62z0.c",
  "south" : DIR+"/rooms/x57y61z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
