inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 26, 7 }));
  set_short( "Hallway - x48y26z7" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y26z7.c",
  "east" : DIR+"/rooms/x49y26z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
