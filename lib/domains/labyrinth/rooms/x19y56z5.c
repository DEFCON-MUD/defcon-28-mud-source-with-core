inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 5 }));
  set_short( "Passage - x19y56z5" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y56z5.c",
  "north" : DIR+"/rooms/x19y57z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
