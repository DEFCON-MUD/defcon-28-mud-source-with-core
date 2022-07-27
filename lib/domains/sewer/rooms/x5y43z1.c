inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 1 }));
  set_short( "Corridor - x5y43z1" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z1.c",
  "south" : DIR+"/rooms/x5y42z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
