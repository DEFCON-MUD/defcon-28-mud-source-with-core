inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 3 }));
  set_short( "Corridor - x24y22z3" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z3.c",
  "east" : DIR+"/rooms/x25y22z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
