inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 9, 7 }));
  set_short( "Corridor - x47y9z7" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y10z7.c",
  "south" : DIR+"/rooms/x47y8z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
