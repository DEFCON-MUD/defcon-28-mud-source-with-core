inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 17, 7 }));
  set_short( "Passage - x3y17z7" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y18z7.c",
  "south" : DIR+"/rooms/x3y16z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
