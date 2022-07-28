inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 38, 7 }));
  set_short( "Corridor - x31y38z7" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y39z7.c",
  "south" : DIR+"/rooms/x31y37z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
