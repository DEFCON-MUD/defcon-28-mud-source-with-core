inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 9 }));
  set_short( "Hallway - x47y28z9" );
set_objects( DIR+"/monsters/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y28z9.c",
  "east" : DIR+"/rooms/x48y28z9.c",
  "south" : DIR+"/rooms/x47y27z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
