inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 56, 8 }));
  set_short( "Passage - x22y56z8" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y56z8.c",
  "east" : DIR+"/rooms/x23y56z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
