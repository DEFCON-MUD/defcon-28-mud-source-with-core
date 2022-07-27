inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 9 }));
  set_short( "Passage - x41y28z9" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y28z9.c",
  "east" : DIR+"/rooms/x42y28z9.c",
  "north" : DIR+"/rooms/x41y29z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
