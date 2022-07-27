inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 7 }));
  set_short( "Corridor - x47y38z7" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y38z7.c",
  "north" : DIR+"/rooms/x47y39z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
