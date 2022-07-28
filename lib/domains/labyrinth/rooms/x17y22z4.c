inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 22, 4 }));
  set_short( "Hallway - x17y22z4" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y23z4.c",
  "south" : DIR+"/rooms/x17y21z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
