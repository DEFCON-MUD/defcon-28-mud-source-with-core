inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 6, 7 }));
  set_short( "Hallway - x1y6z7" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y6z7.c",
  "south" : DIR+"/rooms/x1y5z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
