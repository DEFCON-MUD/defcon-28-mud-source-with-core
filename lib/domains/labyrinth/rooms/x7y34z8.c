inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 8 }));
  set_short( "Corridor - x7y34z8" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y34z8.c",
  "east" : DIR+"/rooms/x8y34z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
