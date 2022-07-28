inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 46, 4 }));
  set_short( "Hallway - x37y46z4" );
set_objects( DIR+"/npc/andy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y47z4.c",
  "south" : DIR+"/rooms/x37y45z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
