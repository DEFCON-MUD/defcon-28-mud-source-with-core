inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 4, 0 }));
  set_short( "Passage - x28y4z0" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y4z0.c",
  "east" : DIR+"/rooms/x29y4z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
