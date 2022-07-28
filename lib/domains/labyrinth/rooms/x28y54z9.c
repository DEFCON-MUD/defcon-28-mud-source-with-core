inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 54, 9 }));
  set_short( "Passage - x28y54z9" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y54z9.c",
  "east" : DIR+"/rooms/x29y54z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
