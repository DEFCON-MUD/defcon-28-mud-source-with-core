inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 9 }));
  set_short( "Passage - x17y34z9" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y34z9.c",
  "north" : DIR+"/rooms/x17y35z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
