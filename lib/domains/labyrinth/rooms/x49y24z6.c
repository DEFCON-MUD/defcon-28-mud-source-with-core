inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 24, 6 }));
  set_short( "Corridor - x49y24z6" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y24z6.c",
  "east" : DIR+"/rooms/x50y24z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
