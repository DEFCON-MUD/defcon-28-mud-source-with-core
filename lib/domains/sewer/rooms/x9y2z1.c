inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 1 }));
  set_short( "Corridor - x9y2z1" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y2z1.c",
  "north" : DIR+"/rooms/x9y3z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
