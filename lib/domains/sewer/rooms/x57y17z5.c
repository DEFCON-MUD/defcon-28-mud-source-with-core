inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 17, 5 }));
  set_short( "Hallway - x57y17z5" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y18z5.c",
  "south" : DIR+"/rooms/x57y16z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
