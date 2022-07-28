inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 2, 5 }));
  set_short( "Passage - x59y2z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y2z5.c",
  "east" : DIR+"/rooms/x60y2z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
