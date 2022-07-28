inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 2, 0 }));
  set_short( "Passage - x40y2z0" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y2z0.c",
  "east" : DIR+"/rooms/x41y2z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
