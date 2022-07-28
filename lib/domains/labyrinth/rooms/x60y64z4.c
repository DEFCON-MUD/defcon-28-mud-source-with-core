inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 64, 4 }));
  set_short( "Passage - x60y64z4" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y64z4.c",
  "east" : DIR+"/rooms/x61y64z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
