inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 42, 1 }));
  set_short( "Passage - x20y42z1" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y42z1.c",
  "east" : DIR+"/rooms/x21y42z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
