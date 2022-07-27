inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 5 }));
  set_short( "Passage - x21y54z5" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y54z5.c",
  "south" : DIR+"/rooms/x21y53z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
