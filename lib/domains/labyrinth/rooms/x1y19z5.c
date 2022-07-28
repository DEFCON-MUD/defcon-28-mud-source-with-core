inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 19, 5 }));
  set_short( "Hallway - x1y19z5" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y20z5.c",
  "south" : DIR+"/rooms/x1y18z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
