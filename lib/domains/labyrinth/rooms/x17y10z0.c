inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 0 }));
  set_short( "Passage - x17y10z0" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z0.c",
  "north" : DIR+"/rooms/x17y11z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
