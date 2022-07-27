inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 9 }));
  set_short( "Corridor - x31y16z9" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y16z9.c",
  "north" : DIR+"/rooms/x31y17z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
