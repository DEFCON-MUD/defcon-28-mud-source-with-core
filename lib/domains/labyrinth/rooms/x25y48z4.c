inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 48, 4 }));
  set_short( "Passage - x25y48z4" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y48z4.c",
  "east" : DIR+"/rooms/x26y48z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
