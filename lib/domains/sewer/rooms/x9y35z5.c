inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 35, 5 }));
  set_short( "Hallway - x9y35z5" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y36z5.c",
  "south" : DIR+"/rooms/x9y34z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
