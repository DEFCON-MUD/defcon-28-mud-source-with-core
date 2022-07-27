inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 58, 6 }));
  set_short( "Hallway - x20y58z6" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y58z6.c",
  "east" : DIR+"/rooms/x21y58z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
