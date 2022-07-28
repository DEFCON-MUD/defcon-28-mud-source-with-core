inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 19, 8 }));
  set_short( "Passage - x21y19z8" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y20z8.c",
  "south" : DIR+"/rooms/x21y18z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
