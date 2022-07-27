inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 40, 1 }));
  set_short( "Passage - x25y40z1" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y41z1.c",
  "south" : DIR+"/rooms/x25y39z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
