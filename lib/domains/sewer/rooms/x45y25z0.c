inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 25, 0 }));
  set_short( "Corridor - x45y25z0" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y26z0.c",
  "south" : DIR+"/rooms/x45y24z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
