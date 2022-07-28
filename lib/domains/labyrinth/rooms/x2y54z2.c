inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 54, 2 }));
  set_short( "Passage - x2y54z2" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y54z2.c",
  "east" : DIR+"/rooms/x3y54z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
