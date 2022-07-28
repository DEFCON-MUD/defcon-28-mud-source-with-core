inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 8, 0 }));
  set_short( "Hallway - x8y8z0" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y8z0.c",
  "east" : DIR+"/rooms/x9y8z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
