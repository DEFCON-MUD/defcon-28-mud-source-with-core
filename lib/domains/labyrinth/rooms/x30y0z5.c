inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 0, 5 }));
  set_short( "Passage - x30y0z5" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y0z5.c",
  "east" : DIR+"/rooms/x31y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
