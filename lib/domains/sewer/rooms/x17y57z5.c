inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 57, 5 }));
  set_short( "Corridor - x17y57z5" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y58z5.c",
  "south" : DIR+"/rooms/x17y56z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
