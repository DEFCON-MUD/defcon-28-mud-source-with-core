inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 3 }));
  set_short( "Passage - x57y6z3" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y6z3.c",
  "north" : DIR+"/rooms/x57y7z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
