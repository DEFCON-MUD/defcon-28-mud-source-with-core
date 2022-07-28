inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 2 }));
  set_short( "Hallway - x61y32z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y33z2.c",
  "south" : DIR+"/rooms/x61y31z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
