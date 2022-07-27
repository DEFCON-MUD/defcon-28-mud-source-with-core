inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 8 }));
  set_short( "Hallway - x36y0z8" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z8.c",
  "east" : DIR+"/rooms/x37y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
