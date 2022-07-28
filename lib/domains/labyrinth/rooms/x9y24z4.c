inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 4 }));
  set_short( "Corridor - x9y24z4" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y24z4.c",
  "north" : DIR+"/rooms/x9y25z4.c",
  "south" : DIR+"/rooms/x9y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
