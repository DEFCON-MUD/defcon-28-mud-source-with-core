inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 34, 5 }));
  set_short( "Hallway - x53y34z5" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y34z5.c",
  "north" : DIR+"/rooms/x53y35z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
