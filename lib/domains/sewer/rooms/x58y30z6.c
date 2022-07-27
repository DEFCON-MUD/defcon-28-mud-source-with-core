inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 30, 6 }));
  set_short( "Hallway - x58y30z6" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y30z6.c",
  "east" : DIR+"/rooms/x59y30z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
