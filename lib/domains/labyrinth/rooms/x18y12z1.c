inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 12, 1 }));
  set_short( "Corridor - x18y12z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y12z1.c",
  "east" : DIR+"/rooms/x19y12z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
