inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 3 }));
  set_short( "Passage - x21y34z3" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y34z3.c",
  "east" : DIR+"/rooms/x22y34z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
