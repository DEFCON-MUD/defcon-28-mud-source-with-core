inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 64, 4 }));
  set_short( "Passage - x38y64z4" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y64z4.c",
  "east" : DIR+"/rooms/x39y64z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
