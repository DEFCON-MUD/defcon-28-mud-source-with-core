inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 55, 0 }));
  set_short( "Corridor - x11y55z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y56z0.c",
  "south" : DIR+"/rooms/x11y54z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
