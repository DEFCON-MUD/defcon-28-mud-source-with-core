inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 2 }));
  set_short( "Passage - x24y22z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z2.c",
  "east" : DIR+"/rooms/x25y22z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
