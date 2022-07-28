inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 7 }));
  set_short( "Corridor - x9y22z7" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y22z7.c",
  "east" : DIR+"/rooms/x10y22z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
