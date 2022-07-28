inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 2, 5 }));
  set_short( "Corridor - x8y2z5" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y2z5.c",
  "east" : DIR+"/rooms/x9y2z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
