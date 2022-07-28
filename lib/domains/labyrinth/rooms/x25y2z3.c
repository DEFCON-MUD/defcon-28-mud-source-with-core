inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 3 }));
  set_short( "Passage - x25y2z3" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y2z3.c",
  "east" : DIR+"/rooms/x26y2z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
