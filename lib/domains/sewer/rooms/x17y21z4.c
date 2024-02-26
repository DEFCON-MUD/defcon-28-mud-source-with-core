inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 21, 4 }));
  set_short( "Hallway - x17y21z4" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y22z4.c",
  "south" : DIR+"/rooms/x17y20z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
