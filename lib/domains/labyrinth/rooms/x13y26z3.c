inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 3 }));
  set_short( "Hallway - x13y26z3" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y26z3.c",
  "south" : DIR+"/rooms/x13y25z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
