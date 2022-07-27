inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 58, 6 }));
  set_short( "Corridor - x1y58z6" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y58z6.c",
  "south" : DIR+"/rooms/x1y57z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
