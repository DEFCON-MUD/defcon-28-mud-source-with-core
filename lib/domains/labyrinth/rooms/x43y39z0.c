inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 39, 0 }));
  set_short( "Hallway - x43y39z0" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y40z0.c",
  "south" : DIR+"/rooms/x43y38z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
