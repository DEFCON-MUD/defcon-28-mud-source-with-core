inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 2, 8 }));
  set_short( "Hallway - x10y2z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y2z8.c",
  "east" : DIR+"/rooms/x11y2z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
