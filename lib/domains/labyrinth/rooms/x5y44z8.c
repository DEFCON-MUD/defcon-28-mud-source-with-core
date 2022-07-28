inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 44, 8 }));
  set_short( "Hallway - x5y44z8" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y44z8.c",
  "north" : DIR+"/rooms/x5y45z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
