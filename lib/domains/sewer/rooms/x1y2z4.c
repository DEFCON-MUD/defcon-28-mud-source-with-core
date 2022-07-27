inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 4 }));
  set_short( "Hallway - x1y2z4" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z4.c",
  "north" : DIR+"/rooms/x1y3z4.c",
  "south" : DIR+"/rooms/x1y1z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
