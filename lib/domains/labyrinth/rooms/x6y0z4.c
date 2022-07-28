inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 4 }));
  set_short( "Corridor - x6y0z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z4.c",
  "east" : DIR+"/rooms/x7y0z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
