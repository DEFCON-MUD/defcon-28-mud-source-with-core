inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 33, 7 }));
  set_short( "Passage - x5y33z7" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y34z7.c",
  "south" : DIR+"/rooms/x5y32z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
