inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 42, 4 }));
  set_short( "Corridor - x43y42z4" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y43z4.c",
  "south" : DIR+"/rooms/x43y41z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
