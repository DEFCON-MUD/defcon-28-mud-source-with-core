inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 2 }));
  set_short( "Corridor - x21y62z2" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y62z2.c",
  "south" : DIR+"/rooms/x21y61z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
