inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 4 }));
  set_short( "Corridor - x33y26z4" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y27z4.c",
  "south" : DIR+"/rooms/x33y25z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
