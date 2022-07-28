inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 1 }));
  set_short( "Corridor - x47y26z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y27z1.c",
  "south" : DIR+"/rooms/x47y25z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
