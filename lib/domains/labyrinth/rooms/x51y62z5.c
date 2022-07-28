inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 62, 5 }));
  set_short( "Corridor - x51y62z5" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y62z5.c",
  "east" : DIR+"/rooms/x52y62z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
