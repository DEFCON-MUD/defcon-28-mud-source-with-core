inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 14, 4 }));
  set_short( "Hallway - x39y14z4" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y14z4.c",
  "north" : DIR+"/rooms/x39y15z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
