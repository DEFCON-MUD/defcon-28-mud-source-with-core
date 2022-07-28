inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 40, 4 }));
  set_short( "Passage - x21y40z4" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y40z4.c",
  "north" : DIR+"/rooms/x21y41z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
