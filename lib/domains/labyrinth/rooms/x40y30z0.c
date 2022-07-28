inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 30, 0 }));
  set_short( "Passage - x40y30z0" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y30z0.c",
  "east" : DIR+"/rooms/x41y30z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
