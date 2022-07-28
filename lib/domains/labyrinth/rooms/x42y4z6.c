inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 6 }));
  set_short( "Passage - x42y4z6" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z6.c",
  "east" : DIR+"/rooms/x43y4z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
