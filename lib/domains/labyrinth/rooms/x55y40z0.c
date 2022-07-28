inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 0 }));
  set_short( "Corridor - x55y40z0" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z0.c",
  "east" : DIR+"/rooms/x56y40z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
