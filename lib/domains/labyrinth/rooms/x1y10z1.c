inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 1 }));
  set_short( "Hallway - x1y10z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z1.c",
  "north" : DIR+"/rooms/x1y11z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
