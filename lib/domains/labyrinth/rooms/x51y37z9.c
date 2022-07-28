inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 9 }));
  set_short( "Passage - x51y37z9" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z9.c",
  "south" : DIR+"/rooms/x51y36z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
