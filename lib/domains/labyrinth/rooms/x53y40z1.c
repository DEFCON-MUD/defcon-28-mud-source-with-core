inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 40, 1 }));
  set_short( "Hallway - x53y40z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y41z1.c",
  "south" : DIR+"/rooms/x53y39z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
