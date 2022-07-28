inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 25, 6 }));
  set_short( "Corridor - x45y25z6" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y26z6.c",
  "south" : DIR+"/rooms/x45y24z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
