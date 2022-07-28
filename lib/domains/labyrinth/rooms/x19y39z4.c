inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 39, 4 }));
  set_short( "Passage - x19y39z4" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y40z4.c",
  "south" : DIR+"/rooms/x19y38z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
