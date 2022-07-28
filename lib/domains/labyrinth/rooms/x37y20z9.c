inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 20, 9 }));
  set_short( "Corridor - x37y20z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y20z9.c",
  "north" : DIR+"/rooms/x37y21z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
