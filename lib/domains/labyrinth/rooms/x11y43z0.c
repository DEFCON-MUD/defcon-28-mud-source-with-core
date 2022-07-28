inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 43, 0 }));
  set_short( "Corridor - x11y43z0" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y44z0.c",
  "south" : DIR+"/rooms/x11y42z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
