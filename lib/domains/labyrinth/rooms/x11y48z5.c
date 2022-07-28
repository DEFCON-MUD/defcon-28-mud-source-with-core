inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 48, 5 }));
  set_short( "Corridor - x11y48z5" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y48z5.c",
  "east" : DIR+"/rooms/x12y48z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
