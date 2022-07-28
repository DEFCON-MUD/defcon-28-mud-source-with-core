inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 23, 9 }));
  set_short( "Passage - x55y23z9" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y24z9.c",
  "south" : DIR+"/rooms/x55y22z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
