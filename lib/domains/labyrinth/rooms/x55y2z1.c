inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 2, 1 }));
  set_short( "Passage - x55y2z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y2z1.c",
  "east" : DIR+"/rooms/x56y2z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
