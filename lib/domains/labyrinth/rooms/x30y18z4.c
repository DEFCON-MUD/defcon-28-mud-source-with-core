inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 18, 4 }));
  set_short( "Passage - x30y18z4" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y18z4.c",
  "east" : DIR+"/rooms/x31y18z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
