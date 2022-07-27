inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 5, 1 }));
  set_short( "Hallway - x47y5z1" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y6z1.c",
  "south" : DIR+"/rooms/x47y4z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
