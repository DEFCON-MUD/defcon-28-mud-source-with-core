inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 64, 3 }));
  set_short( "Hallway - x17y64z3" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y64z3.c",
  "east" : DIR+"/rooms/x18y64z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
