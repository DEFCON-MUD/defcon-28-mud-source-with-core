inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 32, 5 }));
  set_short( "Corridor - x26y32z5" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y32z5.c",
  "east" : DIR+"/rooms/x27y32z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
