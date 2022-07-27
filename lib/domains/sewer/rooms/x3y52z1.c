inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 1 }));
  set_short( "Passage - x3y52z1" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y53z1.c",
  "south" : DIR+"/rooms/x3y51z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
