inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 56, 8 }));
  set_short( "Hallway - x10y56z8" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y56z8.c",
  "east" : DIR+"/rooms/x11y56z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
