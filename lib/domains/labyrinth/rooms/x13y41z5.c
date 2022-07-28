inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 41, 5 }));
  set_short( "Hallway - x13y41z5" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y42z5.c",
  "south" : DIR+"/rooms/x13y40z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
