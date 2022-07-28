inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 57, 7 }));
  set_short( "Hallway - x1y57z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y58z7.c",
  "south" : DIR+"/rooms/x1y56z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
