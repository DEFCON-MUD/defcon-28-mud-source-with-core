inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 22, 0 }));
  set_short( "Corridor - x5y22z0" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y23z0.c",
  "south" : DIR+"/rooms/x5y21z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
