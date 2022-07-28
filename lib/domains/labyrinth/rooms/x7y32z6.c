inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 32, 6 }));
  set_short( "Passage - x7y32z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y33z6.c",
  "south" : DIR+"/rooms/x7y31z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
