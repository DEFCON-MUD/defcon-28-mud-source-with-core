inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 0 }));
  set_short( "Passage - x47y38z0" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y39z0.c",
  "south" : DIR+"/rooms/x47y37z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
