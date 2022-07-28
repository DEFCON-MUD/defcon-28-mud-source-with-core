inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 48, 0 }));
  set_short( "Corridor - x52y48z0" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y48z0.c",
  "east" : DIR+"/rooms/x53y48z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
