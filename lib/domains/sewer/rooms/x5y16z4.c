inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 4 }));
  set_short( "Passage - x5y16z4" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y17z4.c",
  "south" : DIR+"/rooms/x5y15z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
