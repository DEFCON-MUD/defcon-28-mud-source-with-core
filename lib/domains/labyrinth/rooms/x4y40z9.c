inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 40, 9 }));
  set_short( "Passage - x4y40z9" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y40z9.c",
  "east" : DIR+"/rooms/x5y40z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
