inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 4 }));
  set_short( "Passage - x3y11z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z4.c",
  "south" : DIR+"/rooms/x3y10z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
