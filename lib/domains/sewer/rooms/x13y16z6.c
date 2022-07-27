inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 16, 6 }));
  set_short( "Passage - x13y16z6" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y16z6.c",
  "north" : DIR+"/rooms/x13y17z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
