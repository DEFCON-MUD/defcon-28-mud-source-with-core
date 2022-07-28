inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 34, 6 }));
  set_short( "Passage - x13y34z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y34z6.c",
  "south" : DIR+"/rooms/x13y33z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
