inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 6 }));
  set_short( "Passage - x30y64z6" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z6.c",
  "east" : DIR+"/rooms/x31y64z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
