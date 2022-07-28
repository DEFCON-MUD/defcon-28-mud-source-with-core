inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 32, 2 }));
  set_short( "Hallway - x59y32z2" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "south" : DIR+"/rooms/x59y31z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
