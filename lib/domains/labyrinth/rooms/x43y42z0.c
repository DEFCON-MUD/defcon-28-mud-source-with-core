inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 0 }));
  set_short( "Passage - x43y42z0" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y42z0.c",
  "south" : DIR+"/rooms/x43y41z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
