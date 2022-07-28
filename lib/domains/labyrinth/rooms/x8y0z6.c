inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 0, 6 }));
  set_short( "Hallway - x8y0z6" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y0z6.c",
  "east" : DIR+"/rooms/x9y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
