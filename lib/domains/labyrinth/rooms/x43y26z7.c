inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 26, 7 }));
  set_short( "Corridor - x43y26z7" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y26z7.c",
  "north" : DIR+"/rooms/x43y27z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
