inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 7 }));
  set_short( "Passage - x51y46z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y46z7.c",
  "south" : DIR+"/rooms/x51y45z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
