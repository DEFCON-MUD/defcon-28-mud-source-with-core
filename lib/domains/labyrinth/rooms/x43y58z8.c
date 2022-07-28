inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 58, 8 }));
  set_short( "Corridor - x43y58z8" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y59z8.c",
  "south" : DIR+"/rooms/x43y57z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
