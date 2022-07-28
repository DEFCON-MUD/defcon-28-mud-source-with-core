inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 62, 8 }));
  set_short( "Corridor - x46y62z8" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y62z8.c",
  "east" : DIR+"/rooms/x47y62z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
