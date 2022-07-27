inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 4 }));
  set_short( "Passage - x27y30z4" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y30z4.c",
  "north" : DIR+"/rooms/x27y31z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
