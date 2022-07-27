inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 0 }));
  set_short( "Hallway - x9y44z0" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y45z0.c",
  "south" : DIR+"/rooms/x9y43z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
