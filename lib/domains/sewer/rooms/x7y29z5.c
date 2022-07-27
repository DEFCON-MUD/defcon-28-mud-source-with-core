inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 29, 5 }));
  set_short( "Passage - x7y29z5" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y30z5.c",
  "south" : DIR+"/rooms/x7y28z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
