inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 5 }));
  set_short( "Passage - x9y41z5" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z5.c",
  "south" : DIR+"/rooms/x9y40z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
