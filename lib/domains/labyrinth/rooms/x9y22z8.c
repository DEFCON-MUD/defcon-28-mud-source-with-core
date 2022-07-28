inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 8 }));
  set_short( "Passage - x9y22z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y22z8.c",
  "south" : DIR+"/rooms/x9y21z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
