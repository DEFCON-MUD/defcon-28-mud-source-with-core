inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 2 }));
  set_short( "Passage - x35y0z2" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z2.c",
  "east" : DIR+"/rooms/x36y0z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
