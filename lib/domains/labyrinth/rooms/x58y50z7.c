inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 50, 7 }));
  set_short( "Corridor - x58y50z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y50z7.c",
  "east" : DIR+"/rooms/x59y50z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
