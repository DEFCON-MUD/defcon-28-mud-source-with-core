inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 12, 8 }));
  set_short( "Corridor - x19y12z8" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y12z8.c",
  "east" : DIR+"/rooms/x20y12z8.c",
  "south" : DIR+"/rooms/x19y11z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
