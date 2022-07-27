inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 0, 0 }));
  set_short( "Passage - x34y0z0" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y0z0.c",
  "east" : DIR+"/rooms/x35y0z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
