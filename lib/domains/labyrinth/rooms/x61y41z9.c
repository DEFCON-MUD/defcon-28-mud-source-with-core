inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 41, 9 }));
  set_short( "Passage - x61y41z9" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y42z9.c",
  "south" : DIR+"/rooms/x61y40z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
