inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 41, 8 }));
  set_short( "Passage - x11y41z8" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y42z8.c",
  "south" : DIR+"/rooms/x11y40z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
