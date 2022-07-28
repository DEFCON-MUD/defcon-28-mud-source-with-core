inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 12, 9 }));
  set_short( "Passage - x49y12z9" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y12z9.c",
  "south" : DIR+"/rooms/x49y11z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
