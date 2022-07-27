inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 33, 7 }));
  set_short( "Passage - x41y33z7" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y34z7.c",
  "south" : DIR+"/rooms/x41y32z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
