inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 5 }));
  set_short( "Corridor - x41y58z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y59z5.c",
  "south" : DIR+"/rooms/x41y57z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
