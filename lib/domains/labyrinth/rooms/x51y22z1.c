inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 1 }));
  set_short( "Corridor - x51y22z1" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y22z1.c",
  "north" : DIR+"/rooms/x51y23z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
