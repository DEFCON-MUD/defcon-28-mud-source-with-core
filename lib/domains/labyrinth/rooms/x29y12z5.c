inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 5 }));
  set_short( "Passage - x29y12z5" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z5.c",
  "south" : DIR+"/rooms/x29y11z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
