inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 2 }));
  set_short( "Passage - x57y56z2" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y56z2.c",
  "east" : DIR+"/rooms/x58y56z2.c",
  "south" : DIR+"/rooms/x57y55z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
