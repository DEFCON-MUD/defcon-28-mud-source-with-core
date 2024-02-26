inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 6, 6 }));
  set_short( "Hallway - x25y6z6" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y6z6.c",
  "north" : DIR+"/rooms/x25y7z6.c",
  "south" : DIR+"/rooms/x25y5z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
