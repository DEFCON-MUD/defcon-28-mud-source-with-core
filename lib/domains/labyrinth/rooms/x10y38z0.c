inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 38, 0 }));
  set_short( "Passage - x10y38z0" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y38z0.c",
  "east" : DIR+"/rooms/x11y38z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
