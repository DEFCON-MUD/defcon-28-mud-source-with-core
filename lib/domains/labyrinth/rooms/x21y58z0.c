inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 58, 0 }));
  set_short( "Corridor - x21y58z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y58z0.c",
  "north" : DIR+"/rooms/x21y59z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
