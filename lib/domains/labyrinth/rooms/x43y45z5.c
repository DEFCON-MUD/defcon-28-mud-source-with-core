inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 45, 5 }));
  set_short( "Corridor - x43y45z5" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y46z5.c",
  "south" : DIR+"/rooms/x43y44z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
