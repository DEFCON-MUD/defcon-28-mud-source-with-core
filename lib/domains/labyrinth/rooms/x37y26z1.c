inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 1 }));
  set_short( "Passage - x37y26z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y27z1.c",
  "south" : DIR+"/rooms/x37y25z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
