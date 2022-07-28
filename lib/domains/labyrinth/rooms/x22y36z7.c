inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 36, 7 }));
  set_short( "Hallway - x22y36z7" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y36z7.c",
  "east" : DIR+"/rooms/x23y36z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
