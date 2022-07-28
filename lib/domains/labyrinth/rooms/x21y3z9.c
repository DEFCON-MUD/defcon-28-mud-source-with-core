inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 3, 9 }));
  set_short( "Passage - x21y3z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y4z9.c",
  "south" : DIR+"/rooms/x21y2z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
