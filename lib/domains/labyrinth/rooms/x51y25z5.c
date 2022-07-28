inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 25, 5 }));
  set_short( "Corridor - x51y25z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y26z5.c",
  "south" : DIR+"/rooms/x51y24z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
