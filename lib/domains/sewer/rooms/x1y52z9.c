inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 52, 9 }));
  set_short( "Hallway - x1y52z9" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y52z9.c",
  "south" : DIR+"/rooms/x1y51z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
