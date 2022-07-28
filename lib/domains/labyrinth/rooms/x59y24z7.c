inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 24, 7 }));
  set_short( "Passage - x59y24z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y24z7.c",
  "north" : DIR+"/rooms/x59y25z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
