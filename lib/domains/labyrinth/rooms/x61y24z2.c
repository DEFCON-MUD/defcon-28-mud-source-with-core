inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 2 }));
  set_short( "Hallway - x61y24z2" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y24z2.c",
  "south" : DIR+"/rooms/x61y23z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
