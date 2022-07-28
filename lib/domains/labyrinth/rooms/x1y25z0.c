inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 25, 0 }));
  set_short( "Passage - x1y25z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y26z0.c",
  "south" : DIR+"/rooms/x1y24z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
