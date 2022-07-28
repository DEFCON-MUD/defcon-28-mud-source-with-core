inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 25, 0 }));
  set_short( "Hallway - x13y25z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y26z0.c",
  "south" : DIR+"/rooms/x13y24z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
