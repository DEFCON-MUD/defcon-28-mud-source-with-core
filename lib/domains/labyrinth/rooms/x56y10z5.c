inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 10, 5 }));
  set_short( "Passage - x56y10z5" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y10z5.c",
  "east" : DIR+"/rooms/x57y10z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
