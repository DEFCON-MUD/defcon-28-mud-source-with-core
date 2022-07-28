inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 9 }));
  set_short( "Passage - x3y52z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y52z9.c",
  "south" : DIR+"/rooms/x3y51z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
