inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 8 }));
  set_short( "Passage - x17y42z8" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y42z8.c",
  "north" : DIR+"/rooms/x17y43z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
