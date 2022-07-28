inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 6, 5 }));
  set_short( "Passage - x10y6z5" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y6z5.c",
  "east" : DIR+"/rooms/x11y6z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
