inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 35, 5 }));
  set_short( "Hallway - x21y35z5" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y36z5.c",
  "south" : DIR+"/rooms/x21y34z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
