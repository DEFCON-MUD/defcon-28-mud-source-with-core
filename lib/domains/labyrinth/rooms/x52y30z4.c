inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 30, 4 }));
  set_short( "Corridor - x52y30z4" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y30z4.c",
  "east" : DIR+"/rooms/x53y30z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
