inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 7 }));
  set_short( "Passage - x45y32z7" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y33z7.c",
  "south" : DIR+"/rooms/x45y31z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
