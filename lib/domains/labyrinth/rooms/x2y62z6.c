inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 62, 6 }));
  set_short( "Hallway - x2y62z6" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y62z6.c",
  "east" : DIR+"/rooms/x3y62z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
