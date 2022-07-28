inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 5 }));
  set_short( "Corridor - x19y10z5" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y10z5.c",
  "east" : DIR+"/rooms/x20y10z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
