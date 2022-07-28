inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 1 }));
  set_short( "Passage - x55y51z1" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z1.c",
  "south" : DIR+"/rooms/x55y50z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
