inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 32, 5 }));
  set_short( "Passage - x8y32z5" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y32z5.c",
  "east" : DIR+"/rooms/x9y32z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
