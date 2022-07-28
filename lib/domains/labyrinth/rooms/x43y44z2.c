inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 2 }));
  set_short( "Corridor - x43y44z2" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y44z2.c",
  "east" : DIR+"/rooms/x44y44z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
