inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 7 }));
  set_short( "Hallway - x37y24z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y24z7.c",
  "north" : DIR+"/rooms/x37y25z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
