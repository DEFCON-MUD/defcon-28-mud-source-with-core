inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 10, 5 }));
  set_short( "Corridor - x34y10z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y10z5.c",
  "east" : DIR+"/rooms/x35y10z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
