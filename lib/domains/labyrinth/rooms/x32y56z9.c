inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 56, 9 }));
  set_short( "Hallway - x32y56z9" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y56z9.c",
  "east" : DIR+"/rooms/x33y56z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
