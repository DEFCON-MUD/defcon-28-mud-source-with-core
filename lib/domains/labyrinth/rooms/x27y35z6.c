inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 35, 6 }));
  set_short( "Corridor - x27y35z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y36z6.c",
  "south" : DIR+"/rooms/x27y34z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
