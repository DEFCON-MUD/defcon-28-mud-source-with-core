inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 5 }));
  set_short( "Hallway - x9y46z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y46z5.c",
  "north" : DIR+"/rooms/x9y47z5.c",
  "south" : DIR+"/rooms/x9y45z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
