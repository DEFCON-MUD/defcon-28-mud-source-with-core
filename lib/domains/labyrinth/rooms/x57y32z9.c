inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 9 }));
  set_short( "Corridor - x57y32z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y32z9.c",
  "north" : DIR+"/rooms/x57y33z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
