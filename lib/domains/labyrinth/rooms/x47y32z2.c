inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 2 }));
  set_short( "Corridor - x47y32z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y33z2.c",
  "south" : DIR+"/rooms/x47y31z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
