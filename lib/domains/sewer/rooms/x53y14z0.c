inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 0 }));
  set_short( "Passage - x53y14z0" );
set_objects( DIR+"/monsters/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y14z0.c",
  "south" : DIR+"/rooms/x53y13z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
