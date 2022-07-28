inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 15, 6 }));
  set_short( "Corridor - x49y15z6" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y16z6.c",
  "south" : DIR+"/rooms/x49y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
