inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 7 }));
  set_short( "Hallway - x29y12z7" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z7.c",
  "north" : DIR+"/rooms/x29y13z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
