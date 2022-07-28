inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 9 }));
  set_short( "Passage - x15y6z9" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y6z9.c",
  "north" : DIR+"/rooms/x15y7z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
