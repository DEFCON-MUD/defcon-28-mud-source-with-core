inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 28, 5 }));
  set_short( "Corridor - x38y28z5" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y28z5.c",
  "east" : DIR+"/rooms/x39y28z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
