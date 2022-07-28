inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 41, 4 }));
  set_short( "Passage - x3y41z4" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y42z4.c",
  "south" : DIR+"/rooms/x3y40z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
