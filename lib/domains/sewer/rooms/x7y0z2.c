inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 2 }));
  set_short( "Passage - x7y0z2" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z2.c",
  "east" : DIR+"/rooms/x8y0z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
