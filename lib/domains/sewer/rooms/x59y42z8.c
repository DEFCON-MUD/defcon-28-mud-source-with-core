inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 8 }));
  set_short( "Hallway - x59y42z8" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y43z8.c",
  "south" : DIR+"/rooms/x59y41z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
