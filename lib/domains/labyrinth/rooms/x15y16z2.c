inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 16, 2 }));
  set_short( "Passage - x15y16z2" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y16z2.c",
  "east" : DIR+"/rooms/x16y16z2.c",
  "north" : DIR+"/rooms/x15y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
