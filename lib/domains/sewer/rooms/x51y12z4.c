inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 4 }));
  set_short( "Passage - x51y12z4" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y12z4.c",
  "south" : DIR+"/rooms/x51y11z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
