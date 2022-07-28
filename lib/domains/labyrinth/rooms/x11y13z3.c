inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 3 }));
  set_short( "Passage - x11y13z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z3.c",
  "south" : DIR+"/rooms/x11y12z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
