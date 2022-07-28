inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 58, 8 }));
  set_short( "Corridor - x45y58z8" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y59z8.c",
  "south" : DIR+"/rooms/x45y57z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
