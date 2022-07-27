inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 1 }));
  set_short( "Corridor - x25y21z1" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z1.c",
  "south" : DIR+"/rooms/x25y20z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
