inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 49, 2 }));
  set_short( "Corridor - x9y49z2" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y50z2.c",
  "south" : DIR+"/rooms/x9y48z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
