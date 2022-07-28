inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 36, 8 }));
  set_short( "Hallway - x37y36z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y36z8.c",
  "north" : DIR+"/rooms/x37y37z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
