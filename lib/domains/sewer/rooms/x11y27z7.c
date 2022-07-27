inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 27, 7 }));
  set_short( "Corridor - x11y27z7" );
set_objects( DIR+"/monsters/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y28z7.c",
  "south" : DIR+"/rooms/x11y26z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
