inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 7, 7 }));
  set_short( "Passage - x37y7z7" );
set_objects( DIR+"/monsters/wardenbrke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y8z7.c",
  "south" : DIR+"/rooms/x37y6z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
