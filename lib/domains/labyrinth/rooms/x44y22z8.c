inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 22, 8 }));
  set_short( "Hallway - x44y22z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y22z8.c",
  "east" : DIR+"/rooms/x45y22z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
