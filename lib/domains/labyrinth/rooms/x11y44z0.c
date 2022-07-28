inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 0 }));
  set_short( "Corridor - x11y44z0" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y45z0.c",
  "south" : DIR+"/rooms/x11y43z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
