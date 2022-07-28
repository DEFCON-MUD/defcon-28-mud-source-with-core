inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 53, 3 }));
  set_short( "Hallway - x55y53z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y54z3.c",
  "south" : DIR+"/rooms/x55y52z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
