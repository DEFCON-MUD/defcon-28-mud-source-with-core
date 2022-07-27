inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 41, 0 }));
  set_short( "Hallway - x49y41z0" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y42z0.c",
  "south" : DIR+"/rooms/x49y40z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
