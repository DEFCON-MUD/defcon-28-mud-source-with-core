inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 34, 2 }));
  set_short( "Hallway - x49y34z2" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y34z2.c",
  "north" : DIR+"/rooms/x49y35z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
