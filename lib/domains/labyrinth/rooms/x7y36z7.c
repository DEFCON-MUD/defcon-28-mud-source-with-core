inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 7 }));
  set_short( "Hallway - x7y36z7" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z7.c",
  "east" : DIR+"/rooms/x8y36z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
