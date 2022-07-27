inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 2 }));
  set_short( "Hallway - x13y26z2" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y26z2.c",
  "south" : DIR+"/rooms/x13y25z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
