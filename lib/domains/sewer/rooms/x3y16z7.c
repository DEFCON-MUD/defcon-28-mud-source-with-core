inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 7 }));
  set_short( "Corridor - x3y16z7" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y17z7.c",
  "south" : DIR+"/rooms/x3y15z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
