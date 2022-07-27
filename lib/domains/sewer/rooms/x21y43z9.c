inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 43, 9 }));
  set_short( "Corridor - x21y43z9" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y44z9.c",
  "south" : DIR+"/rooms/x21y42z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
