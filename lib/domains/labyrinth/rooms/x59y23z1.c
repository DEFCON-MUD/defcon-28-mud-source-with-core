inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 23, 1 }));
  set_short( "Hallway - x59y23z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y24z1.c",
  "south" : DIR+"/rooms/x59y22z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
