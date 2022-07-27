inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 61, 2 }));
  set_short( "Hallway - x3y61z2" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y62z2.c",
  "south" : DIR+"/rooms/x3y60z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
