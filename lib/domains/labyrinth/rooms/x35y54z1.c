inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 1 }));
  set_short( "Passage - x35y54z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y55z1.c",
  "south" : DIR+"/rooms/x35y53z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
