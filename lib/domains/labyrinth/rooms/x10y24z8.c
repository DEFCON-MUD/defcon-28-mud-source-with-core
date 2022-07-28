inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 24, 8 }));
  set_short( "Corridor - x10y24z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y24z8.c",
  "east" : DIR+"/rooms/x11y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
