inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 28, 1 }));
  set_short( "Corridor - x2y28z1" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y28z1.c",
  "east" : DIR+"/rooms/x3y28z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
