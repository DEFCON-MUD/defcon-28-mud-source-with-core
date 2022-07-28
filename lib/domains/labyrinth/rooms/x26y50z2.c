inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 50, 2 }));
  set_short( "Hallway - x26y50z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y50z2.c",
  "east" : DIR+"/rooms/x27y50z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
