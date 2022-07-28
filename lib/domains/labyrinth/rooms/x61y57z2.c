inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 57, 2 }));
  set_short( "Corridor - x61y57z2" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y58z2.c",
  "south" : DIR+"/rooms/x61y56z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
