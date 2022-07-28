inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 9 }));
  set_short( "Corridor - x39y54z9" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y54z9.c",
  "south" : DIR+"/rooms/x39y53z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
