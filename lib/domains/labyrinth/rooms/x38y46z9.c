inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 46, 9 }));
  set_short( "Passage - x38y46z9" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y46z9.c",
  "east" : DIR+"/rooms/x39y46z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
