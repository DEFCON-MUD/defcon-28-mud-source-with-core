inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 1 }));
  set_short( "Passage - x55y56z1" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y56z1.c",
  "east" : DIR+"/rooms/x56y56z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
