inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 8 }));
  set_short( "Corridor - x43y16z8" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y17z8.c",
  "south" : DIR+"/rooms/x43y15z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
