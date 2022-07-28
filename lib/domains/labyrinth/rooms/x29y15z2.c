inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 15, 2 }));
  set_short( "Passage - x29y15z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y16z2.c",
  "south" : DIR+"/rooms/x29y14z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
