inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 5 }));
  set_short( "Hallway - x1y16z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y16z5.c",
  "north" : DIR+"/rooms/x1y17z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
