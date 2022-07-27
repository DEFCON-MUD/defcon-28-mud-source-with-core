inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 5 }));
  set_short( "Hallway - x43y21z5" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z5.c",
  "south" : DIR+"/rooms/x43y20z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
