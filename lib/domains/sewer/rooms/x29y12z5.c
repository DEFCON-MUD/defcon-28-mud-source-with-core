inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 5 }));
  set_short( "Corridor - x29y12z5" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z5.c",
  "south" : DIR+"/rooms/x29y11z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
