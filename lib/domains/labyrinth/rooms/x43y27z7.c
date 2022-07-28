inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 27, 7 }));
  set_short( "Hallway - x43y27z7" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y28z7.c",
  "south" : DIR+"/rooms/x43y26z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
