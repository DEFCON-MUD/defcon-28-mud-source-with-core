inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 7 }));
  set_short( "Passage - x37y30z7" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y30z7.c",
  "east" : DIR+"/rooms/x38y30z7.c",
  "north" : DIR+"/rooms/x37y31z7.c",
  "south" : DIR+"/rooms/x37y29z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
