inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 7 }));
  set_short( "Passage - x5y4z7" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y4z7.c",
  "north" : DIR+"/rooms/x5y5z7.c",
  "south" : DIR+"/rooms/x5y3z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
