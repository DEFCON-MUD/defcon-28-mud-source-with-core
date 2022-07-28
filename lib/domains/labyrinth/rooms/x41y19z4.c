inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 19, 4 }));
  set_short( "Passage - x41y19z4" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y20z4.c",
  "south" : DIR+"/rooms/x41y18z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
