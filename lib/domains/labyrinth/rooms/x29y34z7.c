inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 7 }));
  set_short( "Passage - x29y34z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y34z7.c",
  "south" : DIR+"/rooms/x29y33z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
