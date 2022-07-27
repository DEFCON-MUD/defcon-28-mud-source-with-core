inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 5, 9 }));
  set_short( "Corridor - x49y5z9" );
set_objects( DIR+"/monsters/evilown.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y6z9.c",
  "south" : DIR+"/rooms/x49y4z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
