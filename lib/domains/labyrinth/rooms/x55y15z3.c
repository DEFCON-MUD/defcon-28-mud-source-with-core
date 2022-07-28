inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 15, 3 }));
  set_short( "Corridor - x55y15z3" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y16z3.c",
  "south" : DIR+"/rooms/x55y14z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
