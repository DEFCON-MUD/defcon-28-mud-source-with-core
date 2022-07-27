inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 3 }));
  set_short( "Hallway - x23y4z3" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y5z3.c",
  "south" : DIR+"/rooms/x23y3z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
