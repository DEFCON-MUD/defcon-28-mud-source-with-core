inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 6 }));
  set_short( "Passage - x27y12z6" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y12z6.c",
  "east" : DIR+"/rooms/x28y12z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
