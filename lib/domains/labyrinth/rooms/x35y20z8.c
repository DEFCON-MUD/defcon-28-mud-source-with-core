inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 20, 8 }));
  set_short( "Hallway - x35y20z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y20z8.c",
  "east" : DIR+"/rooms/x36y20z8.c",
  "north" : DIR+"/rooms/x35y21z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
