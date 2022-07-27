inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 7 }));
  set_short( "Corridor - x25y22z7" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y22z7.c",
  "south" : DIR+"/rooms/x25y21z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
