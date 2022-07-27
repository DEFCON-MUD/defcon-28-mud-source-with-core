inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 8 }));
  set_short( "Corridor - x51y40z8" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y40z8.c",
  "south" : DIR+"/rooms/x51y39z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
