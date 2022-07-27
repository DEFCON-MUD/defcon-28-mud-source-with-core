inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 25, 3 }));
  set_short( "Passage - x35y25z3" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y26z3.c",
  "south" : DIR+"/rooms/x35y24z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
