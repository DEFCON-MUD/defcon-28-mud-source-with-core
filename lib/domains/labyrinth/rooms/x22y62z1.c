inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 62, 1 }));
  set_short( "Passage - x22y62z1" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y62z1.c",
  "east" : DIR+"/rooms/x23y62z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
