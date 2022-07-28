inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 6 }));
  set_short( "Passage - x51y5z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z6.c",
  "south" : DIR+"/rooms/x51y4z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
