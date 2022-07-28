inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 28, 8 }));
  set_short( "Passage - x30y28z8" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y28z8.c",
  "east" : DIR+"/rooms/x31y28z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
