inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 32, 3 }));
  set_short( "Corridor - x50y32z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y32z3.c",
  "east" : DIR+"/rooms/x51y32z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
