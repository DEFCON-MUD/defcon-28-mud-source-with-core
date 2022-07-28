inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 8, 3 }));
  set_short( "Hallway - x36y8z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y8z3.c",
  "east" : DIR+"/rooms/x37y8z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
