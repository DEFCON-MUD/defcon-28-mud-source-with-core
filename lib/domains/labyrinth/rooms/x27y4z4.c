inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 4 }));
  set_short( "Corridor - x27y4z4" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y4z4.c",
  "north" : DIR+"/rooms/x27y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
