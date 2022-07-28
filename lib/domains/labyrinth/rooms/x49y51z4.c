inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 51, 4 }));
  set_short( "Passage - x49y51z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y52z4.c",
  "south" : DIR+"/rooms/x49y50z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
