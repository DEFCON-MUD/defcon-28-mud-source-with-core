inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 3 }));
  set_short( "Passage - x51y38z3" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y38z3.c",
  "north" : DIR+"/rooms/x51y39z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
