inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 4 }));
  set_short( "Corridor - x59y20z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y20z4.c",
  "south" : DIR+"/rooms/x59y19z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
