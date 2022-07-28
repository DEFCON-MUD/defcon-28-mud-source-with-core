inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 1 }));
  set_short( "Corridor - x47y36z1" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y36z1.c",
  "south" : DIR+"/rooms/x47y35z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
