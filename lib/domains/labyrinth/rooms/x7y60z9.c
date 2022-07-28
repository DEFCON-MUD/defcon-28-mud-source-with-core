inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 9 }));
  set_short( "Passage - x7y60z9" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y61z9.c",
  "south" : DIR+"/rooms/x7y59z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
