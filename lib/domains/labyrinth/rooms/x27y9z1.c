inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 9, 1 }));
  set_short( "Corridor - x27y9z1" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y10z1.c",
  "south" : DIR+"/rooms/x27y8z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
