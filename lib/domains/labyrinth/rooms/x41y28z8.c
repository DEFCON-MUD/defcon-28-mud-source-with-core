inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 8 }));
  set_short( "Hallway - x41y28z8" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y29z8.c",
  "south" : DIR+"/rooms/x41y27z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
