inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 3 }));
  set_short( "Hallway - x55y34z3" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y34z3.c",
  "south" : DIR+"/rooms/x55y33z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
