inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 6 }));
  set_short( "Passage - x33y32z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y32z6.c",
  "north" : DIR+"/rooms/x33y33z6.c",
  "south" : DIR+"/rooms/x33y31z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
