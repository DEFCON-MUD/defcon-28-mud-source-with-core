inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 11, 9 }));
  set_short( "Passage - x33y11z9" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y12z9.c",
  "south" : DIR+"/rooms/x33y10z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
