inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 8 }));
  set_short( "Hallway - x9y2z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y2z8.c",
  "east" : DIR+"/rooms/x10y2z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
