inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 5 }));
  set_short( "Corridor - x53y42z5" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z5.c",
  "north" : DIR+"/rooms/x53y43z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
