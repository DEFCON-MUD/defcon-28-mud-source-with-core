inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 5 }));
  set_short( "Passage - x7y0z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z5.c",
  "east" : DIR+"/rooms/x8y0z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
