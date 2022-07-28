inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 8 }));
  set_short( "Hallway - x41y14z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z8.c",
  "north" : DIR+"/rooms/x41y15z8.c",
  "south" : DIR+"/rooms/x41y13z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
