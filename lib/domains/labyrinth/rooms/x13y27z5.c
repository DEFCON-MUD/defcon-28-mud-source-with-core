inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 27, 5 }));
  set_short( "Passage - x13y27z5" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y28z5.c",
  "south" : DIR+"/rooms/x13y26z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
