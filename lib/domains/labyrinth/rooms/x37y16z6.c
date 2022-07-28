inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 6 }));
  set_short( "Passage - x37y16z6" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y16z6.c",
  "east" : DIR+"/rooms/x38y16z6.c",
  "north" : DIR+"/rooms/x37y17z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
