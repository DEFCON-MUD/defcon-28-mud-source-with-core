inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 56, 4 }));
  set_short( "Hallway - x38y56z4" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y56z4.c",
  "east" : DIR+"/rooms/x39y56z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
