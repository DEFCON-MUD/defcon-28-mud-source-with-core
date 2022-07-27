inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 5 }));
  set_short( "Corridor - x43y2z5" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z5.c",
  "north" : DIR+"/rooms/x43y3z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
