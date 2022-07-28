inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 5, 7 }));
  set_short( "Corridor - x43y5z7" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y6z7.c",
  "south" : DIR+"/rooms/x43y4z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
