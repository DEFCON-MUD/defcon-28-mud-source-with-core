inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 5 }));
  set_short( "Corridor - x27y14z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y14z5.c",
  "east" : DIR+"/rooms/x28y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
