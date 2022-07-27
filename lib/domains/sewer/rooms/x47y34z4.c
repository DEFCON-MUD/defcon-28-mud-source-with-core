inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 4 }));
  set_short( "Passage - x47y34z4" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y34z4.c",
  "north" : DIR+"/rooms/x47y35z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
