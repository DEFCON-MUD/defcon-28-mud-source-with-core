inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 20, 1 }));
  set_short( "Passage - x48y20z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y20z1.c",
  "east" : DIR+"/rooms/x49y20z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
