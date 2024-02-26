inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 14, 3 }));
  set_short( "Passage - x7y14z3" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y15z3.c",
  "south" : DIR+"/rooms/x7y13z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
