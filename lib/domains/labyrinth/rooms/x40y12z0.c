inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 12, 0 }));
  set_short( "Hallway - x40y12z0" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y12z0.c",
  "east" : DIR+"/rooms/x41y12z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
