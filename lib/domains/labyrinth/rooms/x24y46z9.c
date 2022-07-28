inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 46, 9 }));
  set_short( "Passage - x24y46z9" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y46z9.c",
  "east" : DIR+"/rooms/x25y46z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
