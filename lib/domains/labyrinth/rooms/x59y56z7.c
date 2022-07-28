inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 56, 7 }));
  set_short( "Corridor - x59y56z7" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y56z7.c",
  "north" : DIR+"/rooms/x59y57z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
