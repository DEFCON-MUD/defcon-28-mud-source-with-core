inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 0 }));
  set_short( "Passage - x43y10z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y11z0.c",
  "south" : DIR+"/rooms/x43y9z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
