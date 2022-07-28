inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 54, 5 }));
  set_short( "Corridor - x22y54z5" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y54z5.c",
  "east" : DIR+"/rooms/x23y54z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
