inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 48, 4 }));
  set_short( "Hallway - x43y48z4" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y49z4.c",
  "south" : DIR+"/rooms/x43y47z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
