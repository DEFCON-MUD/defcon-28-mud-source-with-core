inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 2 }));
  set_short( "Hallway - x3y34z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y34z2.c",
  "north" : DIR+"/rooms/x3y35z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
