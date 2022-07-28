inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 14, 8 }));
  set_short( "Passage - x22y14z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y14z8.c",
  "east" : DIR+"/rooms/x23y14z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
