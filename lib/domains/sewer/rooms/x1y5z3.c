inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 5, 3 }));
  set_short( "Passage - x1y5z3" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y6z3.c",
  "south" : DIR+"/rooms/x1y4z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
