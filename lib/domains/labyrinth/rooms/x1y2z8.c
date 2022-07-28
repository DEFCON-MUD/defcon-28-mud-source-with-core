inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 8 }));
  set_short( "Hallway - x1y2z8" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z8.c",
  "north" : DIR+"/rooms/x1y3z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
