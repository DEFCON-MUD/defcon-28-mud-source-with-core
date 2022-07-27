inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 3 }));
  set_short( "Passage - x1y42z3" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z3.c",
  "south" : DIR+"/rooms/x1y41z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
