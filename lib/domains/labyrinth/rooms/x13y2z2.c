inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 2, 2 }));
  set_short( "Corridor - x13y2z2" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y2z2.c",
  "east" : DIR+"/rooms/x14y2z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
