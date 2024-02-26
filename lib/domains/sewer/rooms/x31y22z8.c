inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 8 }));
  set_short( "Passage - x31y22z8" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y22z8.c",
  "north" : DIR+"/rooms/x31y23z8.c",
  "south" : DIR+"/rooms/x31y21z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
