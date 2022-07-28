inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 6, 7 }));
  set_short( "Hallway - x24y6z7" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y6z7.c",
  "east" : DIR+"/rooms/x25y6z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
