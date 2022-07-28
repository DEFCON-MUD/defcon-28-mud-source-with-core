inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 5 }));
  set_short( "Corridor - x31y20z5" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y20z5.c",
  "north" : DIR+"/rooms/x31y21z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
