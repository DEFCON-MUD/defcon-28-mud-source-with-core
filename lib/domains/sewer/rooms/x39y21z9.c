inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 21, 9 }));
  set_short( "Passage - x39y21z9" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y22z9.c",
  "south" : DIR+"/rooms/x39y20z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
