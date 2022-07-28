inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 11, 0 }));
  set_short( "Hallway - x51y11z0" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y12z0.c",
  "south" : DIR+"/rooms/x51y10z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
