inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 2 }));
  set_short( "Hallway - x23y38z2" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z2.c",
  "east" : DIR+"/rooms/x24y38z2.c",
  "south" : DIR+"/rooms/x23y37z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
