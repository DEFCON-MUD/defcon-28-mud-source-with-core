inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 1 }));
  set_short( "Passage - x11y12z1" );
set_objects( DIR+"/monsters/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y12z1.c",
  "north" : DIR+"/rooms/x11y13z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
