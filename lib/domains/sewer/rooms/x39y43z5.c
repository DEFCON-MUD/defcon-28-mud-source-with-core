inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 43, 5 }));
  set_short( "Passage - x39y43z5" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y44z5.c",
  "south" : DIR+"/rooms/x39y42z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
