inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 9 }));
  set_short( "Corridor - x5y15z9" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z9.c",
  "south" : DIR+"/rooms/x5y14z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
