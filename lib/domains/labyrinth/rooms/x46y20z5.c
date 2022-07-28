inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 5 }));
  set_short( "Corridor - x46y20z5" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z5.c",
  "east" : DIR+"/rooms/x47y20z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
