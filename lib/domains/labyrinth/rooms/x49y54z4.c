inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 4 }));
  set_short( "Passage - x49y54z4" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y54z4.c",
  "south" : DIR+"/rooms/x49y53z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
