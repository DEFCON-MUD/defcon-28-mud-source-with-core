inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 3 }));
  set_short( "Hallway - x13y5z3" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z3.c",
  "south" : DIR+"/rooms/x13y4z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
