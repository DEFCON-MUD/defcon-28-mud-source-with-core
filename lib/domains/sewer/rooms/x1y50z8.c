inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 50, 8 }));
  set_short( "Passage - x1y50z8" );
set_objects( DIR+"/monsters/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y51z8.c",
  "south" : DIR+"/rooms/x1y49z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
