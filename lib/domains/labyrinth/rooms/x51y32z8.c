inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 8 }));
  set_short( "Passage - x51y32z8" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y33z8.c",
  "south" : DIR+"/rooms/x51y31z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
