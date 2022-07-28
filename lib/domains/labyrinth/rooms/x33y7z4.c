inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 7, 4 }));
  set_short( "Corridor - x33y7z4" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y8z4.c",
  "south" : DIR+"/rooms/x33y6z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
