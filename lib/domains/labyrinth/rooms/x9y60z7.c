inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 7 }));
  set_short( "Hallway - x9y60z7" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y60z7.c",
  "north" : DIR+"/rooms/x9y61z7.c",
  "south" : DIR+"/rooms/x9y59z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
