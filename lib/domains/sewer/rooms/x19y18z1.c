inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 18, 1 }));
  set_short( "Hallway - x19y18z1" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y19z1.c",
  "south" : DIR+"/rooms/x19y17z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
