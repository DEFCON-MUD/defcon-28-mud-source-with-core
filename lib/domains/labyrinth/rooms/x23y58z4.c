inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 4 }));
  set_short( "Hallway - x23y58z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y59z4.c",
  "south" : DIR+"/rooms/x23y57z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
