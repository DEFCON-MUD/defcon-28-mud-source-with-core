inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 9 }));
  set_short( "Hallway - x13y51z9" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z9.c",
  "south" : DIR+"/rooms/x13y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
