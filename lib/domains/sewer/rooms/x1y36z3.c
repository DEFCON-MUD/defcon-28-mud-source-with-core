inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 3 }));
  set_short( "Hallway - x1y36z3" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y36z3.c",
  "north" : DIR+"/rooms/x1y37z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
