inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 0 }));
  set_short( "Hallway - x5y15z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z0.c",
  "south" : DIR+"/rooms/x5y14z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
