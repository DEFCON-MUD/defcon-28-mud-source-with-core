inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 30, 3 }));
  set_short( "Corridor - x47y30z3" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y30z3.c",
  "north" : DIR+"/rooms/x47y31z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
