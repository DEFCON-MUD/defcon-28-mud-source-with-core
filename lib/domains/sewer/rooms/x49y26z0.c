inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 0 }));
  set_short( "Corridor - x49y26z0" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y26z0.c",
  "south" : DIR+"/rooms/x49y25z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
