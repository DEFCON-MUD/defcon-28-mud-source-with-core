inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 4 }));
  set_short( "Corridor - x27y2z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y2z4.c",
  "east" : DIR+"/rooms/x28y2z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
