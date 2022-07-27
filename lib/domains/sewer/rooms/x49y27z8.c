inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 8 }));
  set_short( "Corridor - x49y27z8" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z8.c",
  "south" : DIR+"/rooms/x49y26z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
