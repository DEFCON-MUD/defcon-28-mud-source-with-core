inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 12, 1 }));
  set_short( "Passage - x18y12z1" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y12z1.c",
  "east" : DIR+"/rooms/x19y12z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
