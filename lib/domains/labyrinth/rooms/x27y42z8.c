inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 42, 8 }));
  set_short( "Hallway - x27y42z8" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y42z8.c",
  "north" : DIR+"/rooms/x27y43z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
