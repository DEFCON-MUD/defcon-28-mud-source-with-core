inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 28, 4 }));
  set_short( "Passage - x41y28z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y28z4.c",
  "south" : DIR+"/rooms/x41y27z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
