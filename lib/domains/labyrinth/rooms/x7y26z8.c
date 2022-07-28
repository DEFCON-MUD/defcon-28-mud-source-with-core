inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 26, 8 }));
  set_short( "Passage - x7y26z8" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y26z8.c",
  "north" : DIR+"/rooms/x7y27z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
