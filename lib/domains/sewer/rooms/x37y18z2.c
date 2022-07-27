inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 2 }));
  set_short( "Corridor - x37y18z2" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y19z2.c",
  "south" : DIR+"/rooms/x37y17z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
