inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 5 }));
  set_short( "Passage - x43y54z5" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y54z5.c",
  "south" : DIR+"/rooms/x43y53z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
