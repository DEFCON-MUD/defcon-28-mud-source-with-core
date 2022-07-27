inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 3, 7 }));
  set_short( "Corridor - x27y3z7" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y4z7.c",
  "south" : DIR+"/rooms/x27y2z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
