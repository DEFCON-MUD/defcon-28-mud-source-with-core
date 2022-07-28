inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 2 }));
  set_short( "Hallway - x15y5z2" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z2.c",
  "south" : DIR+"/rooms/x15y4z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
