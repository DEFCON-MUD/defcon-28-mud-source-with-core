inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 59, 0 }));
  set_short( "Corridor - x45y59z0" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y60z0.c",
  "south" : DIR+"/rooms/x45y58z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
