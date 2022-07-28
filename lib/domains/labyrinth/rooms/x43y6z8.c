inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 6, 8 }));
  set_short( "Hallway - x43y6z8" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y6z8.c",
  "north" : DIR+"/rooms/x43y7z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
