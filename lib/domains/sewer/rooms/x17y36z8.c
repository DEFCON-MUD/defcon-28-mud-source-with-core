inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 36, 8 }));
  set_short( "Corridor - x17y36z8" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y36z8.c",
  "east" : DIR+"/rooms/x18y36z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
