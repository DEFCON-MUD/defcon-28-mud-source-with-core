inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 1 }));
  set_short( "Hallway - x47y16z1" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y16z1.c",
  "south" : DIR+"/rooms/x47y15z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
