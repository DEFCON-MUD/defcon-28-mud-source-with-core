inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 11, 4 }));
  set_short( "Corridor - x13y11z4" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y12z4.c",
  "south" : DIR+"/rooms/x13y10z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
