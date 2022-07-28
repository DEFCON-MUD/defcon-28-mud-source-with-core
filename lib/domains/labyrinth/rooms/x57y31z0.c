inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 31, 0 }));
  set_short( "Passage - x57y31z0" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y32z0.c",
  "south" : DIR+"/rooms/x57y30z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
