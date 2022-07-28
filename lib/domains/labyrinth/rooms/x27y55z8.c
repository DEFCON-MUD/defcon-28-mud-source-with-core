inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 55, 8 }));
  set_short( "Hallway - x27y55z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y56z8.c",
  "south" : DIR+"/rooms/x27y54z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
