inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 45, 4 }));
  set_short( "Passage - x39y45z4" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y46z4.c",
  "south" : DIR+"/rooms/x39y44z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
