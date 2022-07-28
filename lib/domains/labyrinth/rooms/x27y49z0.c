inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 49, 0 }));
  set_short( "Hallway - x27y49z0" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y50z0.c",
  "south" : DIR+"/rooms/x27y48z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
