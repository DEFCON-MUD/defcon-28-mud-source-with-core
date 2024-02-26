inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 13, 3 }));
  set_short( "Corridor - x11y13z3" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y14z3.c",
  "south" : DIR+"/rooms/x11y12z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
