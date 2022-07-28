inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 42, 4 }));
  set_short( "Hallway - x56y42z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y42z4.c",
  "east" : DIR+"/rooms/x57y42z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
