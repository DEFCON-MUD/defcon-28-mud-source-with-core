inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 50, 4 }));
  set_short( "Passage - x12y50z4" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y50z4.c",
  "east" : DIR+"/rooms/x13y50z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
