inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 7, 3 }));
  set_short( "Hallway - x1y7z3" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y8z3.c",
  "south" : DIR+"/rooms/x1y6z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
