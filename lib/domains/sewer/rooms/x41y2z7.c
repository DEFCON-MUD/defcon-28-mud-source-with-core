inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 7 }));
  set_short( "Passage - x41y2z7" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y2z7.c",
  "north" : DIR+"/rooms/x41y3z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
