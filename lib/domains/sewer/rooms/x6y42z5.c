inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 42, 5 }));
  set_short( "Passage - x6y42z5" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y42z5.c",
  "east" : DIR+"/rooms/x7y42z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
