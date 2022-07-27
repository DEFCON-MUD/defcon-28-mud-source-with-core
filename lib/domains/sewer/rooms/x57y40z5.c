inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 5 }));
  set_short( "Corridor - x57y40z5" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y40z5.c",
  "north" : DIR+"/rooms/x57y41z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
