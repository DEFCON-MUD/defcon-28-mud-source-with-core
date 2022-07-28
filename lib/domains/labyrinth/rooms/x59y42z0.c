inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 0 }));
  set_short( "Passage - x59y42z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y42z0.c",
  "south" : DIR+"/rooms/x59y41z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
