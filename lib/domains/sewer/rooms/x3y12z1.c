inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 1 }));
  set_short( "Corridor - x3y12z1" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y12z1.c",
  "south" : DIR+"/rooms/x3y11z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
