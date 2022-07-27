inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 6 }));
  set_short( "Passage - x61y58z6" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y59z6.c",
  "south" : DIR+"/rooms/x61y57z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
