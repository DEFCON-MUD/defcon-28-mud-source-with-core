inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 4 }));
  set_short( "Passage - x11y34z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y34z4.c",
  "south" : DIR+"/rooms/x11y33z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
