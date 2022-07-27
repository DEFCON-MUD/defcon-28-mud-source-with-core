inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 9 }));
  set_short( "Hallway - x1y62z9" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z9.c",
  "south" : DIR+"/rooms/x1y61z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
