inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 7 }));
  set_short( "Passage - x35y20z7" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y20z7.c",
  "south" : DIR+"/rooms/x35y19z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
