inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 53, 2 }));
  set_short( "Corridor - x33y53z2" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y54z2.c",
  "south" : DIR+"/rooms/x33y52z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
