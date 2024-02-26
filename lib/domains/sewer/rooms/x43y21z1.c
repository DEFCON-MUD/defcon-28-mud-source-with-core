inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 1 }));
  set_short( "Corridor - x43y21z1" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z1.c",
  "south" : DIR+"/rooms/x43y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
