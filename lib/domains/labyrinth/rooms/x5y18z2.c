inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 2 }));
  set_short( "Corridor - x5y18z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y18z2.c",
  "south" : DIR+"/rooms/x5y17z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
