inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 2 }));
  set_short( "Passage - x29y16z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y17z2.c",
  "south" : DIR+"/rooms/x29y15z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
