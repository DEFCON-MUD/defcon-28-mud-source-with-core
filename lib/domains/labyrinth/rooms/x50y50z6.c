inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 50, 6 }));
  set_short( "Passage - x50y50z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y50z6.c",
  "east" : DIR+"/rooms/x51y50z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
