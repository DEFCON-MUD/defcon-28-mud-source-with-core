inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 6 }));
  set_short( "Hallway - x42y6z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z6.c",
  "east" : DIR+"/rooms/x43y6z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
