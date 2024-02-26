inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 21, 4 }));
  set_short( "Corridor - x7y21z4" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y22z4.c",
  "south" : DIR+"/rooms/x7y20z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
