inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 3, 9 }));
  set_short( "Passage - x25y3z9" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y4z9.c",
  "south" : DIR+"/rooms/x25y2z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
