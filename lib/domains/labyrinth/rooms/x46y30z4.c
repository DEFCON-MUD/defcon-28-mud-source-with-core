inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 30, 4 }));
  set_short( "Passage - x46y30z4" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y30z4.c",
  "east" : DIR+"/rooms/x47y30z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
