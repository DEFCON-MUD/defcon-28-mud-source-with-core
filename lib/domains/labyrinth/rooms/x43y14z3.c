inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 3 }));
  set_short( "Passage - x43y14z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y14z3.c",
  "east" : DIR+"/rooms/x44y14z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
