inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 8 }));
  set_short( "Corridor - x11y62z8" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y62z8.c",
  "south" : DIR+"/rooms/x11y61z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
