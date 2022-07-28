inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 64, 1 }));
  set_short( "Corridor - x12y64z1" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y64z1.c",
  "east" : DIR+"/rooms/x13y64z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
