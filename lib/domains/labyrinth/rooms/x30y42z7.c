inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 42, 7 }));
  set_short( "Passage - x30y42z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y42z7.c",
  "east" : DIR+"/rooms/x31y42z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
