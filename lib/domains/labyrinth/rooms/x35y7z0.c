inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 7, 0 }));
  set_short( "Passage - x35y7z0" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y8z0.c",
  "south" : DIR+"/rooms/x35y6z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
