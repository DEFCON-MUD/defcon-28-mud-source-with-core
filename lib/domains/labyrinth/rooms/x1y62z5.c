inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 5 }));
  set_short( "Passage - x1y62z5" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z5.c",
  "south" : DIR+"/rooms/x1y61z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
