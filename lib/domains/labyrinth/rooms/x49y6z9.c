inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 6, 9 }));
  set_short( "Corridor - x49y6z9" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y6z9.c",
  "south" : DIR+"/rooms/x49y5z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
