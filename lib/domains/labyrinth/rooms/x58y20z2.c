inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 20, 2 }));
  set_short( "Hallway - x58y20z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y20z2.c",
  "east" : DIR+"/rooms/x59y20z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
