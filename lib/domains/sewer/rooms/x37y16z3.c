inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 3 }));
  set_short( "Passage - x37y16z3" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y17z3.c",
  "south" : DIR+"/rooms/x37y15z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
