inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 6 }));
  set_short( "Corridor - x38y0z6" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z6.c",
  "east" : DIR+"/rooms/x39y0z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
