inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 2 }));
  set_short( "Passage - x1y26z2" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y27z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
