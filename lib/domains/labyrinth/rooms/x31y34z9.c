inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 34, 9 }));
  set_short( "Corridor - x31y34z9" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y34z9.c",
  "south" : DIR+"/rooms/x31y33z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
