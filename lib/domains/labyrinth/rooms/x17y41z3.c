inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 41, 3 }));
  set_short( "Passage - x17y41z3" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y42z3.c",
  "south" : DIR+"/rooms/x17y40z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
