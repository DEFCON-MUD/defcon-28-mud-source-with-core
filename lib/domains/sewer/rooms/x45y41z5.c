inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 41, 5 }));
  set_short( "Corridor - x45y41z5" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y42z5.c",
  "south" : DIR+"/rooms/x45y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
