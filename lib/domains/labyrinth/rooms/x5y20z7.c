inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 7 }));
  set_short( "Hallway - x5y20z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y20z7.c",
  "north" : DIR+"/rooms/x5y21z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
