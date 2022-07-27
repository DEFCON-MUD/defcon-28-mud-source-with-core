inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 20, 2 }));
  set_short( "Passage - x56y20z2" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y20z2.c",
  "east" : DIR+"/rooms/x57y20z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
