inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 3 }));
  set_short( "Hallway - x27y50z3" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z3.c",
  "north" : DIR+"/rooms/x27y51z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
