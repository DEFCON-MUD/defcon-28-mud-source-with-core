inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 1 }));
  set_short( "Hallway - x21y62z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z1.c",
  "east" : DIR+"/rooms/x22y62z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
