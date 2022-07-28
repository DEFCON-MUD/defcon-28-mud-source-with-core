inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 15, 1 }));
  set_short( "Hallway - x11y15z1" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y16z1.c",
  "south" : DIR+"/rooms/x11y14z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
