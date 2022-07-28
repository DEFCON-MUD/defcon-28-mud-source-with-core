inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 8 }));
  set_short( "Corridor - x1y12z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y12z8.c",
  "south" : DIR+"/rooms/x1y11z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
