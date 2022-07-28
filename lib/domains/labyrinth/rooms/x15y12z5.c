inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 5 }));
  set_short( "Corridor - x15y12z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y12z5.c",
  "south" : DIR+"/rooms/x15y11z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
