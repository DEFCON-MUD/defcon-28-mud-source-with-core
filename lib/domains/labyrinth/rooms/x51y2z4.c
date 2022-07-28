inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 2, 4 }));
  set_short( "Passage - x51y2z4" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y2z4.c",
  "east" : DIR+"/rooms/x52y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
