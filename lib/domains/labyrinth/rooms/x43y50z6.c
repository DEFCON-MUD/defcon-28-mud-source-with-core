inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 6 }));
  set_short( "Passage - x43y50z6" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z6.c",
  "north" : DIR+"/rooms/x43y51z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
