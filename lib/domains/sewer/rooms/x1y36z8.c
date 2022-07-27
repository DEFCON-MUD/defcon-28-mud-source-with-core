inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 8 }));
  set_short( "Passage - x1y36z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z8.c",
  "south" : DIR+"/rooms/x1y35z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
