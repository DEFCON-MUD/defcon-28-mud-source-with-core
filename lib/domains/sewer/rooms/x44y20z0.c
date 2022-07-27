inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 0 }));
  set_short( "Corridor - x44y20z0" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z0.c",
  "east" : DIR+"/rooms/x45y20z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
