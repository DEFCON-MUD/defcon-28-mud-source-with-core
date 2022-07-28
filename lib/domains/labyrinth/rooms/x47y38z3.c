inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 3 }));
  set_short( "Passage - x47y38z3" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y38z3.c",
  "north" : DIR+"/rooms/x47y39z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
