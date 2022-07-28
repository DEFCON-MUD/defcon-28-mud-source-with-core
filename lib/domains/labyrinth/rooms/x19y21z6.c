inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 21, 6 }));
  set_short( "Passage - x19y21z6" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y22z6.c",
  "south" : DIR+"/rooms/x19y20z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
