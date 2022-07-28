inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 0 }));
  set_short( "Corridor - x1y20z0" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z0.c",
  "north" : DIR+"/rooms/x1y21z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
