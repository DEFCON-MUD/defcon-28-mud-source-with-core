inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 5 }));
  set_short( "Hallway - x61y31z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z5.c",
  "south" : DIR+"/rooms/x61y30z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
