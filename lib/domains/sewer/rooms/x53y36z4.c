inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 4 }));
  set_short( "Corridor - x53y36z4" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y36z4.c",
  "north" : DIR+"/rooms/x53y37z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
