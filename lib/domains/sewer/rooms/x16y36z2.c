inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 36, 2 }));
  set_short( "Corridor - x16y36z2" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y36z2.c",
  "east" : DIR+"/rooms/x17y36z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
