inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 8 }));
  set_short( "Hallway - x58y0z8" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z8.c",
  "east" : DIR+"/rooms/x59y0z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
