inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 6, 5 }));
  set_short( "Corridor - x55y6z5" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y6z5.c",
  "north" : DIR+"/rooms/x55y7z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
