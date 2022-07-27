inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 7, 1 }));
  set_short( "Corridor - x59y7z1" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y8z1.c",
  "south" : DIR+"/rooms/x59y6z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
