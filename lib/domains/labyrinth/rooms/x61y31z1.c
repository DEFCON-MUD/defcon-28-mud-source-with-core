inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 1 }));
  set_short( "Passage - x61y31z1" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z1.c",
  "south" : DIR+"/rooms/x61y30z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
