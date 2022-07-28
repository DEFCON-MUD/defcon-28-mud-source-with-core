inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 27, 1 }));
  set_short( "Corridor - x49y27z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y28z1.c",
  "south" : DIR+"/rooms/x49y26z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
