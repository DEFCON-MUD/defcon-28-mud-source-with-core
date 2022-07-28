inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 26, 0 }));
  set_short( "Passage - x35y26z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y26z0.c",
  "south" : DIR+"/rooms/x35y25z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
