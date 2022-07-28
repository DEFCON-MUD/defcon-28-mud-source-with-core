inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 9 }));
  set_short( "Corridor - x1y2z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z9.c",
  "north" : DIR+"/rooms/x1y3z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
