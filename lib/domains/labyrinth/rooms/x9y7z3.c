inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 7, 3 }));
  set_short( "Passage - x9y7z3" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y8z3.c",
  "south" : DIR+"/rooms/x9y6z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
