inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 6 }));
  set_short( "Corridor - x39y38z6" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y38z6.c",
  "south" : DIR+"/rooms/x39y37z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
