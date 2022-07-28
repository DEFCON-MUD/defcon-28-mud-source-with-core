inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 38, 6 }));
  set_short( "Hallway - x45y38z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y38z6.c",
  "south" : DIR+"/rooms/x45y37z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
