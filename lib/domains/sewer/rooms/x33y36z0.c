inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 0 }));
  set_short( "Passage - x33y36z0" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y36z0.c",
  "north" : DIR+"/rooms/x33y37z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
