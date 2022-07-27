inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 7 }));
  set_short( "Passage - x49y27z7" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z7.c",
  "south" : DIR+"/rooms/x49y26z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
