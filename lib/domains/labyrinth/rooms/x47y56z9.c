inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 9 }));
  set_short( "Passage - x47y56z9" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y57z9.c",
  "south" : DIR+"/rooms/x47y55z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
