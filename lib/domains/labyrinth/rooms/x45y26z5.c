inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 26, 5 }));
  set_short( "Corridor - x45y26z5" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y26z5.c",
  "south" : DIR+"/rooms/x45y25z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
