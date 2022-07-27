inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 7, 5 }));
  set_short( "Corridor - x7y7z5" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y8z5.c",
  "south" : DIR+"/rooms/x7y6z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
