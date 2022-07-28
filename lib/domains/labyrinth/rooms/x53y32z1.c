inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 1 }));
  set_short( "Corridor - x53y32z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y32z1.c",
  "south" : DIR+"/rooms/x53y31z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
