inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 6, 4 }));
  set_short( "Corridor - x38y6z4" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y6z4.c",
  "east" : DIR+"/rooms/x39y6z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
