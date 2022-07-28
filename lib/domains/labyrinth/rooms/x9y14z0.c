inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 14, 0 }));
  set_short( "Corridor - x9y14z0" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y14z0.c",
  "south" : DIR+"/rooms/x9y13z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
