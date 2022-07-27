inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 9 }));
  set_short( "Corridor - x21y4z9" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y4z9.c",
  "north" : DIR+"/rooms/x21y5z9.c",
  "south" : DIR+"/rooms/x21y3z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
