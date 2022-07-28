inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 1, 1 }));
  set_short( "Passage - x39y1z1" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y2z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
