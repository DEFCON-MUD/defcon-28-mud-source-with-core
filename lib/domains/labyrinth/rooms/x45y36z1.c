inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 36, 1 }));
  set_short( "Passage - x45y36z1" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y36z1.c",
  "east" : DIR+"/rooms/x46y36z1.c",
  "south" : DIR+"/rooms/x45y35z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
